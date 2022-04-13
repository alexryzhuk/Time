#pragma once
#include <iostream>
typedef unsigned int ui;
class Time
{
private:
	ui hour;
	ui minuts;
	ui secunds;
public:
	Time(void);
	Time(int, int, int);
	~Time(void);
	friend std::istream& operator>>(std::istream&, Time& t);
	friend std::ostream& operator<<(std::ostream& ,Time& t);
	bool operator>(const Time& other);
	bool operator<(const Time& other);
	bool operator>=(const Time& other);
	bool operator<=(const Time& other);
	bool operator==(const Time& other);
	bool operator!=(const Time& other);
	Time& operator++(void);
	Time& operator--(void);
	Time& operator++(int);
	Time& operator--(int);
	Time& operator+=(const Time& other);
	Time& operator-=(const Time& other);
};

