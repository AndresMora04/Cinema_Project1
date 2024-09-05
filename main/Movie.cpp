#include "Movie.h"

void Movie::setName(string name)
{
	this->name = name;
}

void Movie::setYear(int year)
{
	this->year = year;
}

void Movie::setTime(int time)
{
	this->time = time;
}

void Movie::setCountry(string country)
{
	this->country = country;
}

void Movie::setAbout(string about)
{
	this->about = about;
}

string Movie::getName()
{
	return this->name;
}

int Movie::getYear()
{
	return this->year;
}

int Movie::getTime()
{
	return this->time;
}

string Movie::getCountry()
{
	return this->country;
}

string Movie::getAbout()
{
	return this->about;
}
