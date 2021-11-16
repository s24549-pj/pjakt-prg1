#include <iostream>
#include <string>

auto getInt(std::string prompt) -> int
{
	std::cout << prompt;
	auto n = std::string{};
	std::getline(std::cin, n);

	return std::stoi(n);
}

auto main() -> int
{
	auto const intA = getInt("Enter your number: ");

	for(auto i = 1; i <= intA; i++)
	{
		std::cout << i << " ";

		if(i%3 == 0 && i%5 == 0)
		{
			std::cout << "FizzBuzz";
		}
		else if(i%3 == 0)
		{
			std::cout << "Fizz";
		}
		else if(i%5 == 0)
		{
			std::cout << "Buzz";
		}

		
		std::cout << std::endl;
	}

	return 0;
}
