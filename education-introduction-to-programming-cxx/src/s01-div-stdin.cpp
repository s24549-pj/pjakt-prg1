#include <iostream>
#include <string>

auto userInteger(std::string askUser) -> int
{
	std::cout << askUser;
	auto n = std::string{};
	std::getline(std::cin, n);

	return std::stoi(n);
}

auto main() -> int
{
	auto const a = userInteger("Insert int a: ");
	auto const b = userInteger("Now insert int b: ");
	std::cout << "Result of divide is: " << (a / b) << "\n";

	return 0;
}
