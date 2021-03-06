#include <Windows.h>

unsigned int dllVersion;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
	{
		TCHAR szModName[MAX_PATH];
		DWORD dwLen = ::GetModuleFileName(hModule, szModName, sizeof(szModName) / sizeof(TCHAR));
		if (dwLen > 0)
		{
			// get the dll version info
			DWORD dwHandle = 0;
			DWORD dwSize = ::GetFileVersionInfoSize(szModName, &dwHandle);
			if (dwSize > 0)
			{
				// read the version info
				LPBYTE lpInfo = new BYTE[dwSize];
				ZeroMemory(lpInfo, dwSize);
				if (::GetFileVersionInfo(szModName, dwHandle, dwSize, lpInfo))
				{
					UINT valLen = MAX_PATH;
					LPVOID valPtr = NULL;
					if (::VerQueryValue(lpInfo, TEXT("\\"), &valPtr, &valLen))
					{
						VS_FIXEDFILEINFO* pFinfo = (VS_FIXEDFILEINFO*)valPtr;

						// convert to text
						DWORD dwFVMS1 = (pFinfo->dwFileVersionMS >> 16) & 0xFFFF;
						DWORD dwFVMS2 = (pFinfo->dwFileVersionMS) & 0xFFFF;
						DWORD dwFVLS1 = (pFinfo->dwFileVersionLS >> 16) & 0xFFFF;
						DWORD dwFVLS2 = (pFinfo->dwFileVersionLS) & 0xFFFF;

						dllVersion = (dwFVMS1 << 24) | (dwFVMS2 << 16) | (dwFVLS1 << 8) | (dwFVLS2);
					}
				}
			}
		}
		break;
	}
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

