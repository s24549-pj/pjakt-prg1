#include <iostream>
#include <string>

auto ask_user_for_integer(std::string prompt) -> int
{
    std::cout << prompt;
    auto n = std::string{};
    std::getline(std::cin, n);

    return std::stoi(n);
}

auto main() -> int
{
    auto const a = ask_user_for_integer("Enter int a: ");
    auto const b = ask_user_for_integer("Enter int b: ");
    std::cout << "Result is: " << (a - b) << std::endl;

    return 0;
}
