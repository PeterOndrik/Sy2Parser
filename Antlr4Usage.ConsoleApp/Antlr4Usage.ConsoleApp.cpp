// Antlr4Usage.ConsoleApp.cpp : Defines the entry point for the console application.
//
#include "antlr4-runtime.h"

#include <iostream>

int main()
{
	int i = 0;
	antlrcpp::Any test(i);

	std::cout << test.as<int>() << std::endl;

    return 0;
}

