#include "InvalidDateException.h"
#include "Date.h"


const int Date::cdm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const int Date::acumDaysMonth[14] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

const int Date::acumDaysMonthLeapYear[14] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};


Date::Date()
{
    this->relativeDay = 1;
}


Date::Date(int day, int month, int year)
{
    setDma(day, month, year);
}


Date Date::operator +(int days) const
{
    Date addDate(*this); // Disponible por defecto, NO es necesario implementarlo.
    addDate.relativeDay += days;

//    Date addDate;
//    addDate.relativeDay = this->relativeDay + days;

    return addDate;
}


Date Date::operator -(int days) const
{
    Date substractDate(*this);
    substractDate.relativeDay -= days;

    if(substractDate.relativeDay < 1)
        throw InvalidDateException("Date inv�lida: Quiere restar m�s d�as de los permitidos.");

    return substractDate;
}


int Date::operator -(const Date& date) const
{
    return this->relativeDay - date.relativeDay;
}


Date& Date::operator ++() // Preincremento
{
    ++this->relativeDay;
    return *this;
}


Date Date::operator ++(int) // Posincremento
{
    Date previousDate(*this);
    ++this->relativeDay;
    return previousDate;
}


// D�a de la semana, el primer d�a es el lunes y el �ltimo es el domingo. La date base es 1/1/1601.
int Date::dayOfTheWeek() const
{
    return (relativeDay - 1) % 7;
}


void Date::setDma(int day, int month, int year)
{
    if(!isValidDate(day, month, year))
         throw InvalidDateException("Date inv�lida");

    int amountOfYears = year - BASE_YEAR;
    int amountOfDaysInTheYear = amountOfYears * 365 + amountOfYears / 4 - amountOfYears / 100 + amountOfYears / 400;
    this->relativeDay = amountOfDaysInTheYear + dayOfTheYear(day, month, year);
}


void Date::getDma(int& day, int& month, int& year) const
{
    int amountOfYearsCalc = this->relativeDay / 365;

    int amountOfDaysInTheYearCalc;

    amountOfDaysInTheYearCalc =
        amountOfYearsCalc * 365 + amountOfYearsCalc / 4 - amountOfYearsCalc / 100 + amountOfYearsCalc / 400;

    while(amountOfDaysInTheYearCalc >= this->relativeDay)
    {
        amountOfYearsCalc--;
        amountOfDaysInTheYearCalc =
            amountOfYearsCalc * 365 + amountOfYearsCalc / 4 - amountOfYearsCalc / 100 + amountOfYearsCalc / 400;
    }

    year = amountOfYearsCalc + BASE_YEAR;

    int dayOfTheYear = this->relativeDay - amountOfDaysInTheYearCalc;

    daysOfYearToMonth(dayOfTheYear, year, day, month);
}


void Date::daysOfYearToMonth(int dayOfTheYear, int year, int& day, int& month)
{
    const int* acumDaysMonth = isLeapYear(year) ? acumDaysMonthLeapYear : Date::acumDaysMonth;

    int m = 1;
    while(dayOfTheYear > acumDaysMonth[m])
        m++;

    m--;
    month = m;

    day = dayOfTheYear - acumDaysMonth[m];
}


ostream& operator <<(ostream& os, const Date& date)
{
    int day, month, year;
    date.getDma(day, month, year);
    os << day << '/' << month << '/' << year;
    return os;
}
