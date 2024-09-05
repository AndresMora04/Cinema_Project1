#pragma once
#include <iostream>
#include "Movie.h"
#include "Schedule.h"
using namespace std;
#define ROWS 12
#define COLUMS 12
class Cinema
{
private:
	int Seats[ROWS][COLUMS];
	int cost;
	Movie movie;
	Schedule schedule;
public:
	void setCost(int cost);
	void setMovie(Movie movie);
	int getCost();
	Movie getMovie();
	void enumerateSeats();
	bool isFreeSeat(int seat);
};

