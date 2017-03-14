/*
 * headers.h
 *
 *  Created on: 12.03.2017
 *      Author: Nelly
 */

#ifndef HEADERS_H_
#define HEADERS_H_

struct printer {
	bool isInkjet = true;
	bool isBlackAndWhite = false;
	int printSpeedBlackWhite;
	int printSpeedColor;
	int printResolutionVertical;
	int printResolutionHorizontal;
};

typedef struct printer t_printer;

struct listElem {
	//element for linked list -> please reassure correct syntax (typedef? link*?)
	t_printer data;
	listElem* next;
};

class curlFunctions {
	//this class contains the curl functions used in this program

public:
	std::string readBuffer;

	void initCurl();
	//curl initiation, which is only done once every crawl

	static size_t writeData(void*, size_t, size_t, void*);
	//receives URL and retrieves raw string
};

class helperFunctions {
	//several helper functions

public:
	std::string extractDataFromRawString(std::string);
	//extracts formatted string from raw data (delim is ";")
};

class printerList {
	//this class is supposed to parse a web site and save the data
	//other classes will do the searching and make the list of possible
	//printers smaller

public:
	int numberOfPrintersInList = 0;
	const int MAXNUM = 200;

	//how to store data? maybe linked list


	printerList();
	~printerList();



	std::string getPrinterData(std::string);
	//function for parsing DC web site and return string of data
	//delim shall be ";"

	t_printer savePrinter(std::string);
	//saves string data in printer type and adds to list

	void saveAllPrinterData(void);
	//saves all printer data to a txt or XML file

};

#endif
