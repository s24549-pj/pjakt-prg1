#include <iostream>
#include <string>


auto main(int, char* argv[]) -> int
{
    auto liczba = std::stoi(argv[1]);

    for (auto i = 1; i <= liczba; i++) {
        std::cout << i << " ";

        if (i % 3 == 0) {
            std::cout << "Fizz";
        }
        if (i % 5 == 0) {
            std::cout << "Buzz";
        }

        std::cout << std::endl;
    }

    std::cout << "\n";

    return 0;
}
