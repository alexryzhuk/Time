#include "Time.h"

Time::Time() {
	hour =0;
	minuts = 0;
	secunds = 0;
}


Time::Time(int h, int m, int s) {
	this->hour = h;
	this->minuts = m;
	this->secunds = s;
}


Time::~Time() {}; 


std::ostream& operator<<(std::ostream& os, Time& t) {
	 os << "hour :" << t.hour << " minuts :" << t.minuts << " secunds :" << t.secunds;
	 return os;
}


std::istream& operator>>(std::istream& in, Time& t) {
	std::cout << "hour, minuts, secunds: " << std::endl;
	in >> t.hour >>t.minuts >>t.secunds;
	return in;
}


bool Time::operator>(const Time& other) {
	if (this->hour > other.hour) return true;
	else if (this->minuts > other.minuts) return true;
	else if (this->secunds > other.secunds) return true;
	else return false;
}


bool Time::operator<(const Time& other) {
	if (this->hour < other.hour) return true;
	else if (this->minuts < other.minuts) return true;
	else if (this->secunds < other.secunds) return true;
	else return false;
}


bool Time::operator>=(const Time& other) {
	if (this->hour >= other.hour) return true;
	else if (this->minuts >= other.minuts) return true;
	else if (this->secunds >= other.secunds) return true;
	else return false;
}


bool Time::operator<=(const Time& other) {
	if (this->hour <= other.hour) return true;
	else if (this->minuts <= other.minuts) return true;
	else if (this->secunds <= other.secunds) return true;
	else return false;
}


bool Time::operator==(const Time& other) {
	if (this->hour == other.hour) return true;
	else if (this->minuts == other.minuts) return true;
	else if (this->secunds == other.secunds) return true;
	else return false;
}


bool Time::operator!=(const Time& other) {
	if (this->hour != other.hour) return true;
	else if (this->minuts != other.minuts) return true;
	else if (this->secunds != other.secunds) return true;
	else return false;
}


Time& Time::operator++() {
	this->hour++;
	this->minuts++;
	this->secunds++;
	return *this;
}


Time& Time::operator--() {
	this->hour--;
	this->minuts--;
	this->secunds--;
	return *this;
}


Time& Time::operator++(int value) {
	Time temp(*this);
	this->hour++;
	this->minuts++;
	this->secunds++;
	return temp;
}


Time& Time::operator--(int value) {
	Time temp(*this);
	this->hour--;
	this->minuts--;
	this->secunds--;
	return temp;
}


Time& Time::operator+=(const Time& other) {
	this->hour += other.hour;
	this->minuts += other.minuts;
	this->secunds += other.secunds;
	return *this;
}


Time& Time::operator-=(const Time& other) {
	this->hour -= other.hour;
	this->minuts -= other.minuts;
	this->secunds -= other.secunds;
	return *this;
}