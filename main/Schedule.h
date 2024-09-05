#pragma once
#include <iostream>
using namespace std;
class Schedule
{
private:
	string date;
	int startHour = 0;
	int finalHour = 0;
public:
	void setDate(string date);
	void setStartHour(int hour);
	string getDate();
	int getStarHour();
	int getFinalHour(int time);
};

