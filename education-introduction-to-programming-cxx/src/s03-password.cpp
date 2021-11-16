#include <iostream>
#include <string>


auto main() -> int
{
	std::cout << "Enter password: ";
	auto password = std::string{};
	std::getline(std::cin, password);

	std::cout << password << "\n";

	auto n = std::string{};

	do
	{
	std::cout << "Enter password again: ";
	std::getline(std::cin, n);
	}
	while(password != n);

	std::cout << "Correct password\n";

	return 0;
}
