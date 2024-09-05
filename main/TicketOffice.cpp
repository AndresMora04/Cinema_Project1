#include "TicketOffice.h"

void TicketOffice::fillCinemas(Movie movie)
{
	this->cinema[this->emptyCinema].setMovie(movie);
	this->emptyCinema++;
}

void TicketOffice::fillCinemas(Movie movie, int place)
{
	this->cinema[this->emptyCinema].setMovie(movie);
}

int TicketOffice::getNumberCinema(Movie movie)
{
	for (int i = 0; i < LENGHT; i++) {
		if (this->cinema->getMovie().getName() == movie.getName()) {
			return i;
		}
	}
}

Cinema TicketOffice::getCinema(int numberCinema)
{
	return this->cinema[numberCinema];
}

void TicketOffice::saveBill(Bill bill)
{
	this->bills[numberBill] = bill;
	this->numberBill++;
}

//Bill TicketOffice::makeBill(Movie movie)
//{
//	Bill bill;
//	int seat;
//	for (int i = 0; i < LENGHT; i++) {
//		if (movie.getName() == this->cinema[i].getMovie().getName()) {
//			bill.setBillNumber(this->numberBill);
//			bill.setMovie(movie);
//			cout << "Escoje un campo" << endl;
//			cin >> seat;
//			if (this->cinema[i].isFreeSeat(seat)) {
//				cout << "El campo esta libre" << endl;
//				bill.setSeat(seat);
//			}
//		}
//	}
//	return bill;
//}

void TicketOffice::makeBill(Cinema cinema)
{
	Bill bill;
	int seat;
	bill.setBillNumber(this->numberBill);
	cout << bill.getBillNumber();
	bill.setMovie(cinema.getMovie());
	saveBill(bill);
}

int TicketOffice::getNumberCinema(string movieName)
{
	for (int i = 0; i < LENGHT; i++) {
		if (movieName == cinema[i].getMovie().getName()) {
			return i;
		}
	}
}

Movie TicketOffice::addMovie()
{
	Movie movie;
	string name;
	int year;
	int time;
	string country;
	string about;
	cout << "Movie name" << endl;
	cin >> name;
	movie.setName(name);
	cout << "About movie" << endl;
	cin >> about;
	movie.setAbout(about);
	cout << "Country movie" << endl;
	cin >> country;
	movie.setCountry(country);
	cout << "Year movie" << endl;
	cin >> year;
	movie.setYear(year);
	cout << "Time movie" << endl;
	cin >> time;
	movie.setTime(time);
	return movie;
}


