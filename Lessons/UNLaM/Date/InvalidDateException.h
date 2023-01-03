#ifndef INVALID_DATE_EXCEPTION_H
#define INVALID_DATE_EXCEPTION_H

#include <string>

using namespace std;


class InvalidDateException
{
private:
    string message;

public:
    InvalidDateException(string message);
    string getMessage() const;
};


inline InvalidDateException::InvalidDateException(string message)
: message(message)
{}


inline string InvalidDateException::getMessage() const
{
    return message;
}


#endif // INVALID_DATE_EXCEPTION_H
