#pragma once
#include <iostream>
#include "Movie.h"
using namespace std;
class Bill
{
private:
	int code;
	int amount;
	int billNumber;
	int seat;
	Movie movie;
public:
	void setCode(int code);
	void setAmount(int amount);
	void setBillNumber(int billNumber);
	void setSeat(int seat);
	void setMovie(Movie movie);
	int getCode();
	int getAmount();
	int getBillNumber();
	int getSeat();
	Movie getMovie();
};