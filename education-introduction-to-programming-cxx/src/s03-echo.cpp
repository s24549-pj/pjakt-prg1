#include <algorithm>
#include <iostream>
#include <string>
#include <vector>


auto main(int argc, char* argv[]) -> int
{
    if (argc == 1) {
        return 0;
    }

    auto separator     = " ";
    auto reverse       = false;
    auto finishNewLine = true;

    auto flagSeparator = std::string{"-l"};
    auto flagReverse   = std::string{"-r"};
    auto flagFinish    = std::string{"-n"};

    auto toPrint = std::vector<std::string>{};
    {
        auto i = 1;
        for (; i < argc; i++) {
            if (argv[i] == flagSeparator) {
                separator = "\n";
            } else if (argv[i] == flagReverse) {
                reverse = true;
            } else if (argv[i] == flagFinish) {
                finishNewLine = false;
            } else {
                break;
            }
        }
        std::copy(argv + i, argv + argc, std::back_inserter(toPrint));
    }

    if (reverse) {
        std::reverse(toPrint.begin(), toPrint.end());
    }

    std::cout << toPrint[0];
    using size_type = decltype(toPrint)::size_type;
    for (auto j = size_type{1}; j < toPrint.size(); j++) {
        std::cout << separator << toPrint[j];
    }

    if (finishNewLine) {
        std::cout << "\n";
    }


    return 0;
}
