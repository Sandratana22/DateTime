
#include "Time.h"

Time::Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

int Time::getHour() const { return hour; }
int Time::getMinute() const { return minute; }
int Time::getSecond() const { return second; }

void Time::addSeconds(int seconds) {
    this->second += seconds;
    minute += this->second / 60;
    this->second %= 60;

    hour += minute / 60;
    minute %= 60;

    hour %= 24;
}

void Time::addMinutes(int minutes) {
    addSeconds(minutes * 60);
}

void Time::addHours(int hours) {
    addSeconds(hours * 3600);
}