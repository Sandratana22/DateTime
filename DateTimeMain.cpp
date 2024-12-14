// DateTimeMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DateTime.h"

using namespace std; 

int main() {
    DateTime dt(2023, 12, 31, 23, 59, 30);

    cout << "Initial DateTime: " << dt.getYear() << "-" << dt.getMonth() << "-" << dt.getDay()
        << " " << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << endl;

    dt.addSeconds(40);
    cout << "After adding 40 seconds: " << dt.getYear() << "-" << dt.getMonth() << "-" << dt.getDay()
        << " " << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << endl;

    dt.addMinutes(61);
    cout << "After adding 61 minutes: " << dt.getYear() << "-" << dt.getMonth() << "-" << dt.getDay()
        << " " << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << endl;

    dt.addDays(2);
   cout << "After adding 2 days: " << dt.getYear() << "-" << dt.getMonth() << "-" << dt.getDay()
        << " " << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << endl;

    dt.addMonths(1);
   cout << "After adding 1 month: " << dt.getYear() << "-" << dt.getMonth() << "-" << dt.getDay()
        << " " << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << std::endl;

    dt.addYears(1);
    cout << "After adding 1 year: " << dt.getYear() << "-" << dt.getMonth() << "-" << dt.getDay()
        << " " << dt.getHour() << ":" << dt.getMinute() << ":" << dt.getSecond() << endl;

    return 0;
}

