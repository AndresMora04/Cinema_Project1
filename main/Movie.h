#pragma once
#include <iostream>
using namespace std;
class Movie
{
private:
	string name;
	int year;
	int time;
	string country;
	string about;
public:
	void setName(string name);
	void setYear(int year);
	void setTime(int time);
	void setCountry(string country);
	void setAbout(string about);
	string getName();
	int getYear();
	int getTime();
	string getCountry();
	string getAbout();
};

