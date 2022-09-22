#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

// default constructor - initializes priv. data members
Date::Date() {
    month = 1;
    day = 1;
    year = 2022;
}

// second constructor - initializes priv. data members based off given parameters
Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

// destructor
Date::~Date() {}

// if given parameter is valid, it changes date to such, else returns false
bool Date::changeDate(int m, int d, int y) {
    if (m >= 4 && d >= 1 && y >= 2022 ) {
        month = m;
        day = d;
        year = y;
        return true;
    } else {
        return false;
    }
}

// returns the date as a string
string Date::getDate() {
    string str1 = to_string(month);
    string str2 = to_string(day);
    string str3 = to_string(year);
    string l = "/";
    return str1 + l + str2 + l + str3;
}