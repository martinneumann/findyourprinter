/*
 * questions.cpp
 *
 *  Created on: 10.03.2017
 *      Author: Martin
 */

#ifndef QUESTIONS_CPP
#define QUESTIONS_CPP

#include <iostream>
#include "curl/curl.h"
#include "../headers/headers.h"



size_t curlFunctions::writeData(void* buffer, size_t size, size_t nmemb, void* userp) {
	// writes Data to desired location, stdout for now
	((std::string*)userp)->append((char*)buffer, size * nmemb);
	std::cout << "retrieved data: " << buffer << std::endl;
	return size * nmemb;
}

void curlFunctions::initCurl() {
	//@TODO: Consider adding runtime sensitive functions such as version check
	//see man page "curl_version_info"

	std::cout << "Initializing cURL..." << std::endl;
	curl_global_init(CURL_GLOBAL_ALL);
	CURL* handle = curl_easy_init();
	if (handle) {
		std::cout << "Intialization successful." << std::endl;
		CURLcode res;
		 curl_easy_setopt(handle, CURLOPT_URL, "http://www.druckerchannel.de/device_info.php?ID=4554&t=canon_maxify_mb5150/");
		 //curl_easy_setopt(handle, CURLOPT_WRITEDATA, writeData);
		 res = curl_easy_perform(handle);
		 curl_easy_cleanup(handle);
	} else {
		std::cout << "Initialization failed." << std::endl;
	}


}

std::string printerList::getPrinterData(std::string nameOfUrl) {
	//runs through DC URLs to retrieve data


	return (std::string)("test");
}

#endif

