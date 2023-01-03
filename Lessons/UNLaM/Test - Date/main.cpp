#include <iostream>
#include "../Date/InvalidDateException.h"
#include "../Date/Date.h"
#include <locale.h>

using namespace std;


int main()
{
    // Change the console encoding to 1252 (ANSI)
    //system("chcp 1252 > nul");
    setlocale(LC_CTYPE, "spanish");

    Date defaultDate;
    Date firstDate(20, 8, 2022);
    const Date secondDate(10, 9, 2022);

    Date addDate = firstDate + 180;
    cout << "addDate: " << addDate << endl; // 22/8/2022
    //Date addDate = Date(20, 8, 2022) + 180; // Objeto temporal.


    Date thirdDate = firstDate++; // Postincremento.
    Date fourthDate = ++firstDate; // Preincremento.
    cout << "firstDate: " << firstDate << endl; // 22/8/2022
    cout << "thirdDate: " << thirdDate << endl; // 20/8/2022
    cout << "fourthDate: " << fourthDate << endl; // 22/8/2022


    int differenceOfDays = firstDate - secondDate;

    cout << "Diferencia de dias: " << differenceOfDays << endl;

    Date substractDate;

    try
    {
        substractDate = firstDate - 180;
    }
    catch(const InvalidDateException& e)
    {
        cerr << e.getMessage() << endl;
        return INVALID_DATE;
    }

    cout << "Date resta: " << substractDate << endl;
    cout << "Date: " << firstDate << endl;

    int day, month, year;
    char bar;
    cout << "ingrese una fecha (D/M/A):" << endl;
    cin >> day >> bar >> month >> bar >> year;
    cout << "Date ingresada: " << day << "/" << month << "/" << year << endl;

/*
    cout << "ingrese una fecha (D/M/A):" << endl;
    cin >> firstDate;
    cout << "Date ingresada: " << firstDate << endl;
*/

    return 0;
}
