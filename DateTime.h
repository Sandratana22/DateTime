
#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time {
public:
    DateTime(int year = 2000, int month = 1, int day = 1, int hour = 0, int minute = 0, int second = 0);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void addSeconds(int seconds) override;
    void addMinutes(int minutes) override;
    void addHours(int hours) override;
    void addDays(int days) override;
    void addMonths(int months) override;
    void addYears(int years) override;

    ~DateTime() override = default;
};

#endif
