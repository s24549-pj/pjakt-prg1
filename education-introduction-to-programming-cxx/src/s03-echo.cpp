#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string lineFlag    = "-l";
std::string reverseFlag = "-r";
std::string toUpperFlag = "-u";
std::string noEndl      = "-n";

auto main() -> int
{
    auto userInput = std::string{};
    std::cout << "Enter a word: ";
    std::getline(std::cin, userInput);

    int const a = userInput.length();

    std::vector<char> charVector(a);
    std::copy(userInput.begin(), userInput.end(), charVector.begin());

    for (int i = 0; i <= a; i++) {
        std::cout << charVector[i] << " ";
    }
    // std::cout << std::endl;  //zakomentowalem std::endl zeby na koncu
    // programu wykorzystac flage noEndl "-n"

    std::size_t foundLineFlag = userInput.find(lineFlag);

    if (foundLineFlag != std::string::npos) {
        std::cout << std::endl;  // dodaje std::endl zeby lineFlag wykonac od
                                 // nowej linii, pomimo tego i pomimo ponizszego
                                 // "if" przy fladze "-l" na koncu dostaje
                                 // dodatkowy std::endl - nie wiem skad sie
                                 // bierze
        for (int i = 0; i <= a; i++) {
            if (i < (a - 1)) {
                std::cout << charVector[i];
                std::cout << std::endl;
            } else {
                std::cout << charVector[i];
            }
        }
    }

    std::size_t foundToUpperFlag = userInput.find(toUpperFlag);

    if (foundToUpperFlag != std::string::npos) {
        std::cout << std::endl;  // dodaje std::endl zeby toUpperFlag wykonac od
                                 // nowej linii

        for (int i = 0; i <= a; i++) {
            charVector[i] = toupper(charVector[i]);
            std::cout << charVector[i];
            std::cout << " ";
        }

        for (int i = 0; i <= a; i++) {
            charVector[i] = tolower(charVector[i]);
        }
    }

    std::size_t foundReverseFlag = userInput.find(reverseFlag);

    if (foundReverseFlag != std::string::npos) {
        std::reverse(charVector.begin(), charVector.end());

        std::cout << std::endl;  // dodaje std::endl zeby reverseFlag wykonac od
                                 // nowej linii

        for (int i = 0; i <= a; i++) {
            std::cout << charVector[i];
            std::cout << " ";
        }
    }

    std::size_t foundNoEndl = userInput.find(noEndl);

    if (foundNoEndl != std::string::npos) {
    } else {
        std::cout << std::endl;
    }

    return 0;
}
