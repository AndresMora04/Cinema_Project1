#include "Schedule.h"

void Schedule::setDate(string date)
{
	this->date = date;
}

void Schedule::setStartHour(int starthour)
{
	this->startHour = starthour;
}

string Schedule::getDate()
{
	return this->date;
}

int Schedule::getStarHour()
{
	return this->startHour;
}

int Schedule::getFinalHour(int time)
{
	return (time / 60) + this->startHour;
}
