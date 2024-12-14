
#include "DateTime.h"

DateTime::DateTime(int year, int month, int day, int hour, int minute, int second)
    : Date(year, month, day), Time(hour, minute, second) {}

int DateTime::getYear() const { return Date::getYear(); }
int DateTime::getMonth() const { return Date::getMonth(); }
int DateTime::getDay() const { return Date::getDay(); }

int DateTime::getHour() const { return Time::getHour(); }
int DateTime::getMinute() const { return Time::getMinute(); }
int DateTime::getSecond() const { return Time::getSecond(); }

void DateTime::addSeconds(int seconds) {
    Time::addSeconds(seconds);
    while (getHour() >= 24) {
        addDays(1);
        Time::addHours(1); 
    }
}

void DateTime::addMinutes(int minutes) {
    addSeconds(minutes * 60);
}

void DateTime::addHours(int hours) {
    addSeconds(hours * 3600);
}

void DateTime::addDays(int days) {
    Date::addDays(days);
}
void DateTime::addMonths(int months) {
    Date::addMonths(months);
}

void DateTime::addYears(int years) {
    Date::addYears(years);
}
