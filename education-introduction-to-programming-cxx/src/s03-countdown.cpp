#include <unistd.h>

#include <iostream>
#include <string>


auto main(int, char* argv[]) -> int
{
    auto const number = std::stoi(argv[1]);
    std::cout << "Your integer is: " << number << std::endl;
    std::cout << "Countdown is starting!\n";

    for (auto i = number; i >= 0; --i) {
        usleep(200000);
        std::cout << i << std::endl;
    }

    return 0;
}
