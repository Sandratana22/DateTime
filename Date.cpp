
#include "Date.h"

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

int Date::getYear() const { return year; }
int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }

void Date::addDays(int days) {
    while (days > 0) {
        int daysThisMonth = daysInMonth(year, month);
        if (day + days <= daysThisMonth) {
            day += days;
            break;
        }
        else {
            days -= (daysThisMonth - day + 1);
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
}

void Date::addMonths(int months) {
    month += months;
    while (month > 12) {
        month -= 12;
        year++;
    }
    int daysThisMonth = daysInMonth(year, month);
    if (day > daysThisMonth) {
        day = daysThisMonth;
    }
}

void Date::addYears(int years) {
    year += years;
    if (month == 2 && day == 29 && !isLeapYear(year)) {
        day = 28;
    }
}

bool Date::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::daysInMonth(int year, int month) {
    if (month == 2)
        return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    return 31;
}


