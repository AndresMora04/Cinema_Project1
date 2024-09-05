#pragma once
#include <iostream>
#include "Cinema.h"
#include "Bill.h"
using namespace std;

#define LENGHT 3
#define LENGHTBILLS 10

class TicketOffice
{
private:
	Cinema cinema[LENGHT];
	Bill bills[LENGHTBILLS];
	int numberBill = 0;
	int emptyCinema = 0;
public:
	void fillCinemas(Movie movie);
	void fillCinemas(Movie movie, int place);
	int getNumberCinema(Movie movie);
	Cinema getCinema(int numberCinema);
	void saveBill(Bill bill);
	//Bill makeBill(Movie movie);
	void makeBill(Cinema cinema);
	int getNumberCinema(string movieName);
	Movie addMovie();
};

