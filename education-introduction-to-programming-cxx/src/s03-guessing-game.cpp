#include <cstdlib>
#include <iostream>
#include <random>
#include <string>


auto main() -> int
{
    int guess;

    auto rd     = std::random_device{};
    auto d      = std::uniform_int_distribution<int>{1, 100};
    auto number = d(rd);

    std::cout << "The number 1..100 was randomly generated\n";

    while (guess != number) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        // std::cout << std::endl;

        if (guess == number) {
            std::cout << "Congratulations! You've guessed the number!\n";
        } else if (guess < number) {
            std::cout << "Number too low\n";
        } else if (guess > number) {
            std::cout << "Number too big\n";
        }
    }

    return 0;
}
