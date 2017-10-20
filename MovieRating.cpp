// MovieRating.cpp : Defines the entry point for the console application.
//

#pragma once

#include "stdafx.h"
#include "Movie.h"
#include "Header.h"
#include <vector>
#include <iostream>

void printAllMovies(Movie movies[]) {

	std::cout << "Alright, let's see: \n" << std::endl;
	
	for (int index = 0; index <= 2; index++) {
		movies[index].printData();
	}

	std::cout << "\n Thanks for the info, human. " << std::endl;
}

int main()
{
	Movie movies[3];
	std::cout << "Hola. Wanna talk about cinema? Tell me your top 3 movies and I will remember them forever! \n" << std::endl;

	for (int index = 0; index <= 2; index++) {   
				// Q: can I dynamically assign a name to a class instance ?
		
		std::cout << "You are entering movie number " << index + 1 << " of 3" << std::endl;
		movies[index].getUserMovieData();

		
	}
	printAllMovies(movies);

    return 0;
}

