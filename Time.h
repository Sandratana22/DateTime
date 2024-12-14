
#ifndef TIME_H
#define TIME_H

#include <stdio.h>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour = 0, int minute = 0, int second = 0);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    virtual void addSeconds(int seconds);
    virtual void addMinutes(int minutes);
    virtual void addHours(int hours);

    virtual ~Time() = default;
};

#endif