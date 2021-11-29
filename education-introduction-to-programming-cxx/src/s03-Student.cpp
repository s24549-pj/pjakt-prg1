#include <s1234/Student.h>

#include <istream>
#include <string>

Student::Student(std::string imie,
                 std::string nazwisko,
                 std::string nr_indeksu,
                 int aktualny_semestr,
                 double srednia_ocen)
        : imie{imie}
        , nazwisko{nazwisko}
        , nr_indeksu{nr_indeksu}
        , aktualny_semestr{aktualny_semestr}
        , srednia_ocen{srednia_ocen}
{}

auto Student::to_string() const -> std::string
{
    std::string str_aktualny_semestr = std::to_string(aktualny_semestr);
    std::string str_srednia_ocen     = std::to_string(srednia_ocen);

    return (imie + ", " + nazwisko + ", " + nr_indeksu
            + ", sem: " + str_aktualny_semestr + ", " + str_srednia_ocen);
}

auto main() -> int
{
    auto Jan_Kowalski = Student{"Jan", "Kowalski", "s12345", 1, 4.25};

    std::cout << Jan_Kowalski.to_string() << std::endl;

    return 0;
}
