#include <iostream>
#include <string>
#include <unistd.h>

auto askForInteger(std::string prompt) -> int
{
	std::cout << prompt;
	auto n = std::string{};
	std::getline(std::cin, n);

	return std::stoi(n);
}


auto main() -> int
{
	auto const a = askForInteger("Enter your integer: ");
	std::cout << "Your integer is: " << a << std::endl;
	std::cout << "Countdown is starting!\n";

	for(auto i = a; i >= 0; --i)
	{
		usleep(200000);
		std::cout << i << std::endl;
	}

	return 0;
}
