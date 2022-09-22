// Alessandro Sisniegas

#ifndef TIME_H_
#define TIME_H_

#include <string>
using namespace std;

enum Period { AM, PM };

class Time {
 private:
    int hour;
    int minute;
    int second;
    Period period;
    // Converts period to a string a.m. or p.m.
    string periodToString();

    // Adds a leading zero if needed
    string leadingZero(int x);

 public:
    // Default ctor - Sets default to midnight
    Time();

    // Ctor - Only accepts valid times in 12-hour format
    Time(int h, int m, int s, Period p);

    // Dtor
    ~Time();

    // Changes time based on params
    bool changeTime(int h, int m, int s, Period p);

    // Returns the time as a string
    string getTime();
};

#endif  // TIME_H_
