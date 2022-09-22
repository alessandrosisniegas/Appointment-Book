// Alessandro Sisniegas

#ifndef BOOK_H_
#define BOOK_H_

#include "Appointment.h"
#include <vector>
#include <string>
using namespace std;

class Book {
 private:
    vector<Appointment> vecAppts;

 public:
    // Default ctor
    Book();

    // Dtor
    ~Book();

    // Adds the Appointment to the Book
    void addAppointment(Appointment a);

    // Changes the appointment date if returns true
    bool changeAppointment(int i, int m, int d, int y);

    // Changes the appointment time if returns true
    bool changeAppointment(int i, int h, int m, int s, Period p);


    // Changes the appointment desc if return true
    bool changeAppointment(int i, string d);

    // Deletes appointment
    void delAppointment(int i);

    // Displays the appointment book details
    void displayAppointments();

    // Indicates if book is empty by returning true or false
    bool emptyList();

    // Returns number of appointments in book
    int numAppointments();
};

#endif  // BOOK_H_
