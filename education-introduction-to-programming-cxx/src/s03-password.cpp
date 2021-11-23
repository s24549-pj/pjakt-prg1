#include <iostream>
#include <string>


auto main(int, char* argv[]) -> int
{
    auto password = argv[1];

    std::cout << password << "\n";

    auto n = std::string{};

    do {
        std::cout << "Enter password again: ";
        std::getline(std::cin, n);
    } while (password != n);

    std::cout << "Correct password\n";

    return 0;
}
