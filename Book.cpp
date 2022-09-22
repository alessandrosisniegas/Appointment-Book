#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
#include "Appointment.h"
#include "Date.h"
#include "Time.h"
#include <iomanip>
using namespace std;

void Book::displayAppointments() {
    cout.setf(ios::left, ios::adjustfield);
    cout << setw(7) << "Appt # ";
    cout << setw(11) << "Date";
    cout << setw(14) << "Time";
    cout << setw(25) << "Description" << endl;
    for (int i = 0; i < vecAppts.size(); ++i) {
        cout << setw(7) << i;
        vecAppts.at(i).displayAppointment();
    }
}

// default constructor
Book::Book() {}

// destructor
Book::~Book() {}

// adds Appt. into vector
void Book::addAppointment(Appointment a) {
    vecAppts.push_back(a);
}

// changes Appt. date at 'i' given parameter values
bool Book::changeAppointment(int i, int m, int d, int y) {
    return vecAppts.at(i).changeDate(m, d, y);
}

// changes Appt. time at 'i' given parameter values
bool Book::changeAppointment(int i, int h, int m, int s, Period p) {
    return vecAppts.at(i).changeTime(h, m, s, p);
}

// changes Appt. desc. at 'i' given parameter values
bool Book::changeAppointment(int i, string d) {
    vecAppts.at(i).changeDesc(d);
    return true;
}

// deletes Appt. in vector at element 'i'
void Book::delAppointment(int i) {
    vecAppts.erase(vecAppts.begin() + i);
}

// returns true if book is empty, if not returns false
bool Book::emptyList() {
    if (vecAppts.size() == 0) {
        return true;
    }
    return false;
}

// returns vector size which is number of appointments
int Book::numAppointments() {
    return vecAppts.size();
}