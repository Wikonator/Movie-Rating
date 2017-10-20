/* definitions for the Movie class. Gets user data, checks its validity and saves them */

#pragma once




#include "stdafx.h"
#include "Movie.h"
#include <iostream>
#include <string>
#include <ctime>


Movie::Movie() {

	string Movie = "Name";
	int Year = 0;
	float Rating = 0.0;
}


Movie::~Movie() {

}

void Movie::getUserMovieData() {

	string Movie = "Name";
	int Year = 0;
	float Rating = 0.0;

	std::cout << "What's your favourite movie?" << std::endl;
	std::getline(std::cin, Movie);
	std::cout << "Sweet! When was it released?" << std::endl;
	std::cin >> Year;
	if (checkYearValidity(Year)) {
		std::cout << "And I will need its IMDb rating: " << std::endl;
		std::cin >> Rating;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		saveData(Movie, Year, Rating);
	}

}

bool Movie::checkYearValidity(int Year) {

	std::time_t now = time(0); // set now to - now in miliseconds

	tm *ltm = localtime(&now);	// ltm points to local time at Now

	int currentYear = ltm->tm_year + 1900;

	if (Year > currentYear || Year < 1896) {
		
		int anotherTry = 0;
		std::cout << "Wise guy, eh? Back To The Future is this way ==> \n ... now try again: " << std::endl;
		std::cin >> anotherTry;
		checkYearValidity(anotherTry);
	}
	else {

		return true;
	}
}
void Movie::saveData(string Name, int Year, float Rating) {

	MovieName = Name;
	ReleaseYear = Year;
	MovieRating = Rating; 
}

void Movie::printData() {

	std::cout << MovieName << std::endl;
	std::cout << ReleaseYear << std::endl;
	std::cout << MovieRating << std::endl;
}