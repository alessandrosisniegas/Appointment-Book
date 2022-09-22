// Alessandro Sisniegas

#ifndef DATE_H_
#define DATE_H_

#include <string>
using namespace std;

class Date {
 private:
    int month;
    int day;
    int year;

 public:
    // Default ctor - Sets default to Jan 1 2022
    Date();

    // Ctor - Sets date based on params, assumes only valid dates are used with this ctor
    Date(int m, int d, int y);

    // Dtor
    ~Date();

    // Changes the date based on params - Only accepts valid dates after April 1 2022, returns false if invalid
    bool changeDate(int m, int d, int y);

    // Return the date as a string
    string getDate();
};

#endif  // DATE_H_
