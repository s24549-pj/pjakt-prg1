#include <iostream>
#include <string>


auto main(int argc, char* argv[]) -> int
{
    auto beerNumber = 99;


    if (argc > 1) {
        beerNumber = std::stoi(argv[1]);
    }
    if (beerNumber <= 0) {
        std::cout << "There's no bottles of beer." << std::endl;

        return 1;
    }

    for (int i = beerNumber; i >= 0; i--) {
        if (i > 0) {
            std::cout << i << " bottles of beer on the wall, " << i
                      << " bottles of beer. \n";
            std::cout << "Take one down, pass it around, " << (i - 1)
                      << " bottles of beer on the wall...\n";
        } else if (i == 0) {
            std::cout << "No more bottles of beer on the wall, no more bottles "
                         "of beer.\n";
            std::cout << "Go to the store and buy some more, " << beerNumber
                      << " bottles of beer on the wall...\n";
        }
    }

    return 0;
}
