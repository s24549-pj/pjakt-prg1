#include <iostream>
#include <string>

struct Student {
    std::string const imie;
    std::string const nazwisko;
    std::string const nr_indeksu;
    int aktualny_semestr;
    double srednia_ocen;

    auto to_string() const -> std::string;

    Student(std::string imie,
            std::string nazwisko,
            std::string nr_indeksu,
            int aktualny_semestr,
            double srednia_ocen);
};
