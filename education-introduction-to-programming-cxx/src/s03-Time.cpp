#include <istream>
#include <string>
#include <s1234/Time.h>

Time::Time(int Hour, int Minute, int Second)
	: hour{Hour}
	, minute{Minute}
	, second{Second}
{}

auto Time::to_string() const -> std::string{

	std::string str_hour = std::to_string(hour);
	std::string str_minute = std::to_string(minute);
	std::string str_second = std::to_string(second);
	std::string zero = "0";

	if(hour <= 9){
	std::string str_hour1 = std::to_string(hour);
	str_hour = zero + str_hour1;
	}else{
	std::string str_hour = std::to_string(hour);
	}

	if(minute <= 9){
	std::string str_minute1 = std::to_string(minute);
	str_minute = zero + str_minute1;
	}else{
	std::string str_minute = std::to_string(minute);
	}

	if(second <= 9){
	std::string str_second1 = std::to_string(second);
	str_second = zero + str_second1;
	}else{
	std::string str_second = std::to_string(second);
	}

	return(str_hour + ":" + str_minute + ":" + str_second);
}

auto Time::next_hour() -> void{

	if(hour < 23){
	hour++;
	}else{
	hour = 0;
	}
}

auto Time::next_minute() -> void{

	if(minute < 59){
	minute++;
	}else{
	minute = 0;
	Time::next_hour();
	}
}

auto Time::next_second() -> void{

	if(second < 59){
	second++;
	}else{
	second = 0;
	Time::next_minute();
	}
}

auto main() -> int{

	auto midnight = Time(23, 59, 59);
	
	std::cout << midnight.to_string() << std::endl;
	midnight.next_second();
	std::cout << midnight.to_string() << std::endl;

	return 0;
}
