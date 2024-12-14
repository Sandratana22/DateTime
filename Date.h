
#ifndef DATE_H
#define DATE_H

#include <stdio.h>

class Date {
private:
    int year;
    int month;
    int day;

public:
    Date(int year = 2000, int month = 1, int day = 1);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

    virtual void addDays(int days);
    virtual void addMonths(int months);
    virtual void addYears(int years);

    static bool isLeapYear(int year);
    static int daysInMonth(int year, int month);

    virtual ~Date() = default;
};

#endif 

