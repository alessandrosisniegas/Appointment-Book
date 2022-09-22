// Alessandro Sisniegas

#ifndef APPOINTMENT_H_
#define APPOINTMENT_H_

#include "Date.h"
#include "Time.h"
#include <string>
using namespace std;

class Appointment {
 private:
    Date date;
    Time time;
    string desc;

 public:
    // Default ctor - sets desc to "none"
    Appointment();

    // Ctor - Creates date and time object with params, assumes all values are valid
    Appointment(int mo, int d, int y, int h, int mi, int s, Period p, string des);

    // Dtor
    ~Appointment();

    // Changes the appointments date if returns true
    bool changeDate(int m, int d, int y);

    // Changes the appointments time if returns true
    bool changeTime(int h, int m, int s, Period p);

    // Changes the appointmets description
    void changeDesc(string d);

    // Displays Appointment in table format
    void displayAppointment();

    // Returns the appointment as a string
    string getAppointment();
};

#endif  // APPOINTMENT_H_
