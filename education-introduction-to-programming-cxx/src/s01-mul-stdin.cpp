#include <iostream>
#include <string>

auto askUserForInteger(std::string askForInput) -> int
{
	std::cout << askForInput;
	auto n = std::string{};
	std::getline(std::cin, n);

	return std::stoi(n);
}

auto main() -> int
{
	auto const a = askUserForInteger("Please enter int a: ");
	auto const b = askUserForInteger("Please enter int b: ");
	std::cout << "Result is: " << (a * b) << std::endl;

	return 0;
}
