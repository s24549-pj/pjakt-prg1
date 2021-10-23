#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int
{
	auto const a = std::stoll(argv[1]);
	auto const b = std::stoll(argv[2]);
	std::cout << (a * b) << "\n";

	return 0;
}
