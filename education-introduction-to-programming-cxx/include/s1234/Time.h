#include <iostream>
#include <string>

struct Time {
    int hour;
    int minute;
    int second;

    enum class Time_of_day {

        morning,
        day,
        evening,
        night

    };

    auto to_string() const -> std::string;
    auto next_hour() -> void;
    auto next_minute() -> void;
    auto next_second() -> void;

    auto time_of_day() const -> Time_of_day;
    auto to_string(Time_of_day) -> std::string;

    Time(int hour, int minute, int second);
};
