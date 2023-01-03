#ifndef DATE_H
#define DATE_H

// La date base es 1/1/1601.

#define BASE_YEAR 1601
#define INVALID_DATE 1

#include <iostream>

using namespace std;


class Date
{
private:
    int relativeDay;

    static const int cdm[13];
    static const int acumDaysOfMonth[14];
    static const int acumDaysOfMonthLeapYear[14];

    static inline bool isLeapYear(int year) { return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; };

    static inline int amountOfDaysInTheMonth(int month, int year) { return month == 2 && isLeapYear(year) ? 29 : cdm[month]; };

    static inline bool isValidDate(int day, int month, int year)
    { return year >= BASE_YEAR && month >= 1 && month <= 12 && day >= 1 && day <= amountOfDaysInTheMonth(month, year); };

    static int dayOfYear(int day, int month, int year)
    { return (isLeapYear(year) ? acumDaysOfMonthLeapYear[month] : acumDaysOfMonth[month]) + day; };

    static void dayOfYearToDayOfMonth(int dayOfYear, int year, int& day, int& month);

public:
    Date();
    Date(int day, int month, int year);

    Date operator +(int days) const;
    Date& operator ++(); // Preincremento
    Date operator ++(int); // Posincremento
    int operator -(const Date& date) const;
    Date operator -(int days) const;
    // TODO
    // Date& operator --(); // Predecremento
    // Date operator --(int); // Posdecremento
    // Date& operator +=(int days);
    // Date& operator -=(int days);
    // bool operator ==(const Date& date) const;
    // bool operator !=(const Date& date) const;
    // bool operator <(const Date& date) const;
    // bool operator <=(const Date& date) const;
    // bool operator >(const Date& date) const;
    // bool operator >=(const Date& date) const;

    int dayOfTheWeek() const;
    void getDma(int& day, int& month, int& year) const;
    void setDma(int day, int month, int year);
};


ostream& operator <<(ostream& os, const Date& date);
istream& operator >>(istream& is, Date& date);


#endif // DATE_H
