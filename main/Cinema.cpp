#include "Cinema.h"

void Cinema::setCost(int cost)
{
	this->cost = cost;
}

void Cinema::setMovie(Movie movie)
{
	this->movie = movie;
}

int Cinema::getCost()
{
	return this->cost;
}

Movie Cinema::getMovie()
{
	return this->movie;
}

void Cinema::enumerateSeats()
{
	int countSeats = 1;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMS; j++) {
			this->Seats[i][j] = countSeats;
			countSeats++;
		}
	}
}

bool Cinema::isFreeSeat(int seat)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMS; j++) {
			if (this->Seats[i][j] == seat) {
				this->Seats[i][j] = 0;
				return true;
			}
		}
	}
	return false;
}
