/*
 * main.cpp
 *
 *  Created on: 10.03.2017
 *      Author: Nelly
 */

/***
 *
 * This is a program made for the Druckerchannel.de API.
 * @Author: Martin Neumann
 *
 */

#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include "../headers/headers.h"
#include "curl/curl.h"



int main() {
	bool endLoop = false;
	std::string input;

	using namespace std;

	//testrun for printer data here: parse ONE web site
	//how do DC URLS work?

	cout << "Welcome to Find Your Printer." << endl;

	curlFunctions funcs;
	funcs.initCurl();

	return EXIT_SUCCESS;
}

#endif
