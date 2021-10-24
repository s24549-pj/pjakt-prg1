#include <iostream>
#include <string>

auto ask_user_for_integer(std::string prompt) -> int
{
	prompt = "Enter int: ";	
	std::cout << prompt;
	auto n = std::string{};
	std::getline(std::cin, n);

	return std::stoi(n);
}


auto main() -> int
{
	auto const a = ask_user_for_integer("a = ");
	auto const b = ask_user_for_integer("b = ");
	std::cout << "Sum equals: " << (a + b) << "\n";

	return 0;
}
