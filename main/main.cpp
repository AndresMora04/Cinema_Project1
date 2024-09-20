#pragma once
#include <iostream>
#include "Movie.h"
#include "TicketOffice.h"
using namespace std;
int main()
{
	TicketOffice ticketOffice;
	bool flag = true;
    int userChoice = 0;
    int userChoice2 = 0;
    int userChoice3 = 0;
    string movieName;
    int movieToSee;
    int addMovie;
    Movie movie;

    while (flag)
    {
        cout << "====== MENU PRINCIPAL ======" << endl;
        cout << "| 1. Archivo               |" << endl;
        cout << "| 2. Mantenimiento         |" << endl;
        cout << "| 3. Reserva               |" << endl;
        cout << "| 4. Venta                 |" << endl;
        cout << "============================" << endl << endl;
        cout << "Por favor, seleccione una opcion: ";
        cin >> userChoice;
        cout << endl << endl;

        switch (userChoice)
        {
        case 1://ARCHIVO
            cout << "========= ARCHIVO =========" << endl;;
            cout << "| 1. Información          |" << endl;;
            cout << "| 2. Salir                |" << endl;;
            cout << "===========================" << endl << endl;;
            cout << "Por favor, seleccione una opcion:";
            cin >> userChoice2;
            if (userChoice2 == 1) {
                cout << "Creador: Jose Andres Mora Mora" << endl;
            }

            else if (userChoice2 == 2) {
                flag = false;
            }
            break;
        case 2://MANTENIMIENTO
            cout << "========= MANTENIMIENTO =========" << endl;
            cout << "| 1. Ingresar Nueva Pelicula    |" << endl;
            cout << "| 2. Ingresar Nuevo Horario     |" << endl;
            cout << "=================================" << endl << endl;
            cout << "Por favor, seleccione una opcion: ";
            cin >> userChoice3;
            int numCinema;
            if (userChoice3 == 1) {
                cout << "En que cine quieres agregar la pelicula" << endl;
                cin >> numCinema;
                ticketOffice.fillCinemas(ticketOffice.addMovie(), numCinema);
            }
            else if (userChoice3 == 2) {

            }
            break;
        case 3://RESERVA
            cout << "Dame el nombre de la pelicula" << endl;
            cin >> movieName;
            movieToSee = ticketOffice.getNumberCinema(movieName);
            ticketOffice.makeBill(ticketOffice.getCinema(movieToSee));
            break;
        case 4://VENTA

            break;
        default:

            cout << "SELECCIONE UNA OPCION VALIDA" << endl;

            break;
        }
    }
}