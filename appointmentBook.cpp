// Alessandro Sisniegas

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "Book.h"
#include "Appointment.h"
#include "Time.h"
#include <iomanip>
using namespace std;

vector<string> splitLine(string input);
Period stringToPeriod(string input);

int main() {
    ifstream inFS;
    string filename;

    vector<string> tokens;
    string input;

    cin >> filename;

    inFS.open(filename);

    if (!inFS.is_open()) {
        cout << "File error" << endl;
        return 1;
    }

    Book b;

    while (getline(inFS, input)) {
        vector<string> tokens = splitLine(input);

        // switch statement on char of string in vector at element 0
        switch (tokens.at(0).at(0)) {
            // A - Adds Appt.
            case 'A': {
                Appointment a(stoi(tokens.at(1)), stoi(tokens.at(2)), stoi(tokens.at(3)), stoi(tokens.at(4)), stoi(tokens.at(5)), stoi(tokens.at(6)), stringToPeriod(tokens.at(7)), tokens.at(8));
                b.addAppointment(a);
                break;
            }
            // D - Displays Appt.
            case 'D': {
                b.displayAppointments();
                break;
            }
            // J - Changes Appt. Date
            case 'J': {
                b.changeAppointment(stoi(tokens.at(1)), stoi(tokens.at(2)), stoi(tokens.at(3)), stoi(tokens.at(4)));
                break;
            }
            // K - Changes Appt. Time
            case 'K': {
                b.changeAppointment(stoi(tokens.at(1)), stoi(tokens.at(2)), stoi(tokens.at(3)), stoi(tokens.at(4)), stringToPeriod(tokens.at(5)));
                break;
            }
            // L - Changes Appt. Desc
            case 'L': {
                b.changeAppointment(stoi(tokens.at(1)), tokens.at(2));
                break;
            }
            // X - Delete Appt.
            case 'X': {
                b.delAppointment(stoi(tokens.at(1)));
            }
        }

    }

    inFS.close();
    return 0;
}

vector<string> splitLine(string input) {
    vector<string> result;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, ',')) {
        result.push_back(temp);
    }

    return result;
}

Period stringToPeriod(string input) {
    if (input == "AM") {
        return AM;
    } else if (input == "PM") {
        return PM;
    } else {
        cout << "Something went wrong converting to Period" << endl;
        exit(1);
    }
}
