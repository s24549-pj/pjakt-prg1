#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

int number; int guess;


auto main() -> int
{
	srand(time(NULL));
	number = rand()%100+1;

	std::cout << "The number 1..100 was randomly generated\n";

	while(guess != number)
	{
		std::cout << "Enter your guess: ";
		std::cin >> guess;
		//std::cout << std::endl;

		if(guess == number)
		{
			std::cout << "Congratulations! You've guessed the number!\n";
		}
		else if(guess < number)
		{
			std::cout << "Number too low\n";
		}
		else if(guess > number)
		{
			std::cout << "Number too big\n";
		}
	}

	return 0;
}
