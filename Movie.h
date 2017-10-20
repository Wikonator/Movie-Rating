/*
Header for a class saving the movie data from the user
*/

#pragma once

#include <string>

using string = std::string;

// get movie Name, Year and Rating (from the user...)
// check if the year is valid
// 

class Movie
{
public:

	Movie();
	~Movie();
	void getUserMovieData();
	bool checkYearValidity(int);
	void saveData(string, int, float);
	void printData();

private:
	
	string MovieName;
	int ReleaseYear;
	float MovieRating;
};

