#include <s1234/Time.h>

#include <istream>
#include <string>

Time::Time(int Hour, int Minute, int Second)
        : hour{Hour}, minute{Minute}, second{Second}
{}

auto Time::to_string() const -> std::string
{
    std::string str_hour   = std::to_string(hour);
    std::string str_minute = std::to_string(minute);
    std::string str_second = std::to_string(second);
    std::string zero       = "0";

    if (hour <= 9) {
        std::string str_hour1 = std::to_string(hour);
        str_hour              = zero + str_hour1;
    } else {
        std::string str_hour = std::to_string(hour);
    }

    if (minute <= 9) {
        std::string str_minute1 = std::to_string(minute);
        str_minute              = zero + str_minute1;
    } else {
        std::string str_minute = std::to_string(minute);
    }

    if (second <= 9) {
        std::string str_second1 = std::to_string(second);
        str_second              = zero + str_second1;
    } else {
        std::string str_second = std::to_string(second);
    }

    return (str_hour + ":" + str_minute + ":" + str_second);
}

auto Time::next_hour() -> void
{
    if (hour < 23) {
        hour++;
    } else {
        hour = 0;
    }
}

auto Time::next_minute() -> void
{
    if (minute < 59) {
        minute++;
    } else {
        minute = 0;
        Time::next_hour();
    }
}

auto Time::next_second() -> void
{
    if (second < 59) {
        second++;
    } else {
        second = 0;
        Time::next_minute();
    }
}

auto Time::time_of_day() const -> Time_of_day
{
    if (hour >= 6 && hour < 10) {
        return Time_of_day::morning;
    } else if (hour >= 10 && hour < 18) {
        return Time_of_day::day;
    } else if (hour >= 18 && hour < 22) {
        return Time_of_day::evening;
    } else {
        return Time_of_day::night;
    }
}

auto Time::to_string(Time_of_day a) -> std::string
{
    // jak usunalem z nazwy funkcji 'a' i uzylem tego to program sie skompilowal
    // ale dostalem blad 'Segmentation fault (core dumped)' zamiast pory dnia
    // std::string str_time_of_day = Time::to_string(Time::time_of_day());
    // return str_time_of_day;

    if (a == Time_of_day::morning) {
        return "Morning";
    } else if (a == Time_of_day::day) {
        return "Day";
    } else if (a == Time_of_day::evening) {
        return "Evening";
    } else {
        return "Night";
    }
}


auto main() -> int
{
    auto some_time = Time(23, 59, 59);

    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;
    some_time.next_second();
    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;

    some_time = Time(9, 59, 59);
    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;
    some_time.next_second();
    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;

    some_time = Time(17, 59, 59);
    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;
    some_time.next_second();
    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;

    some_time = Time(21, 59, 59);
    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;
    some_time.next_second();
    std::cout << some_time.to_string(some_time.time_of_day()) << " : "
              << some_time.to_string() << std::endl;

    return 0;
}
