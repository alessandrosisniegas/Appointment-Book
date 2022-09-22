#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

// converting period to string
string Time::periodToString() {
    if (period == AM) {
        return "a.m.";
    } else {
        return "p.m.";
    }
}

// inserting leading zero if it's a one digit number
string Time::leadingZero(int x) {
    string y = to_string(x);
    if (x < 10) {
        y.insert(0, "0");
    }
    return y;
}

// default constructor - initializing priv. data members 
Time::Time() {
    hour = 12;
    minute = 0;
    second = 0;
    period = AM;
}

// second constructor - initializing priv. data members based off given parameters
Time::Time(int h, int m, int s, Period p) {
    if (h <= 12) {
        hour = h;
        minute = m;
        second = s;
        period = p;
    }
}

// destructor
Time::~Time() {};

// if given parameters is valid, time will change to parameter values
bool Time::changeTime(int h, int m, int s, Period p) {
    if (h < 1 || h > 12) {
        return false;
    }
    if (m < 0 || m > 60) {
        return false;
    }
    if (s < 0 || s > 60) {
        return false;
    }
    hour = h;
    minute = m;
    second = s;
    period = p;
    return true;
}

// returns time as a string
string Time::getTime() {
    string str1 = to_string(hour);
    string str2 = leadingZero(minute);
    string str3 = leadingZero(second);
    string l = ":";
    string b = " ";
    return str1 + l + str2 + l + str3 + b + periodToString();
}