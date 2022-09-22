#include <iostream>
#include <string>
#include "Appointment.h"
#include "Date.h"
#include "Time.h"
#include <iomanip>

using namespace std;

// default constructor - initializing desc. to "none"
Appointment::Appointment() {
    desc = "none";
}

// second constructor - initializes date, time, and desc. to given parameters
Appointment::Appointment(int mo, int d, int y, int h, int mi, int s, Period p, string des) {
    date.changeDate(mo, d, y);
    time.changeTime(h, mi, s, p);
    desc = des;
}

// destructor
Appointment::~Appointment() {}

// changes date to given parameter if returns true
bool Appointment::changeDate(int m, int d, int y) {
    return date.changeDate(m, d, y);
}

// changes time to given parameter if returns true
bool Appointment::changeTime(int h, int m, int s, Period p) {
    return time.changeTime(h, m, s, p);
}

// changes Appt. desc. to given string
void Appointment::changeDesc(std::string d) {
    desc = d;
}

// displays Appt. with adequate amount of spaces between each statement
void Appointment::displayAppointment() {
    cout << setw(11) << date.getDate() << setw(14) << time.getTime() << setw(25) << desc << endl;
}

// returns Appt. as a string
string Appointment::getAppointment() {
    return date.getDate() + " " + time.getTime() + " " + desc;
}