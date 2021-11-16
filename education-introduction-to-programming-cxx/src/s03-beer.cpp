#include <iostream>
#include <string>

auto n = std::string{};

auto userInput(std::string prompt) -> int
{
    std::cout << prompt;
    std::getline(std::cin, n);
    if (n.empty()) {
        n = "99";
    }

    return stoi(n);
}


auto main() -> int
{
    userInput("Enter integer (this is optional): ");

    int a = stoi(n);

    for (int i = a; i >= 0; i--) {
        if (i > 0) {
            std::cout << i << " bottles of beer on the wall, " << i
                      << " bottles of beer. \n";
            std::cout << "Take one down, pass it around, " << (i - 1)
                      << " bottles of beer on the wall...\n";
        } else if (i == 0) {
            std::cout << "No more bottles of beer on the wall, no more bottles "
                         "of beer.\n";
            std::cout << "Go to the store and buy some more, " << a
                      << " bottles of beer on the wall...\n";
        }
    }

    return 0;
}
