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
    auto const a = ask_user_for_integer("Please enter int a: ");
    auto const b = ask_user_for_integer("Please enter int b: ");
    std::cout << "Sum equals: " << (a + b) << "\n";

    return 0;
}
