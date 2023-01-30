#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	Time sum(Time&);
	void show();
	~Time();
	friend Time operator* (int n, Time& t) {
		return t * n;
	}
};

#endif //TIMEH