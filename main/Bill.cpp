#include "Bill.h"

void Bill::setCode(int code)
{
	this->code = code;
}

void Bill::setAmount(int amount)
{
	this->amount = amount;
}

void Bill::setBillNumber(int billNumber)
{
	this->billNumber = billNumber;
}

void Bill::setSeat(int seat)
{
	this->seat = seat;
}

void Bill::setMovie(Movie movie)
{
	this->movie = movie;
}

int Bill::getCode()
{
	return this->code;
}

int Bill::getAmount()
{
	return this->amount;
}

int Bill::getBillNumber()
{
	return this->billNumber;
}

int Bill::getSeat()
{
	return this->seat;
}

Movie Bill::getMovie()
{
	return this->movie;
}