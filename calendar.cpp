#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

// Function to get the number of days in a given month
int getDaysInMonth(int month, int year) {
    if (month == 2) { // February
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30; // April, June, September, November
    }
    return 31; // Other months
}

// Function to get the day of the week for the 1st day of the month
int getStartDay(int month, int year) {
    tm firstDay = {};
    firstDay.tm_year = year - 1900;
    firstDay.tm_mon = month - 1;
    firstDay.tm_mday = 1;
    mktime(&firstDay); // Normalize time structure
    return firstDay.tm_wday; // Returns day of the week (0 = Sunday, ..., 6 = Saturday)
}

// Function to display the calendar for the current month
void displayCalendar(int month, int year) {
    cout << "\n   Calendar for " << month << "/" << year << "\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int startDay = getStartDay(month, year);
    int daysInMonth = getDaysInMonth(month, year);

    // Print leading spaces for the first row
    for (int i = 0; i < startDay; i++) {
        cout << "    ";
    }

    // Print days of the month
    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(3) << day << " ";
        if ((day + startDay) % 7 == 0) {
            cout << endl; // New line at the end of the week
        }
    }
    cout << "\n";
}

int main() {
    time_t now = time(0);
    tm *localTime = localtime(&now);

    int currentDay = localTime->tm_mday;
    int currentMonth = localTime->tm_mon + 1;
    int currentYear = localTime->tm_year + 1900;

    // Display current date and time
    cout << "Today's Date: " << currentDay << "-" << currentMonth << "-" << currentYear << endl;
    cout << "Current Time: " << localTime->tm_hour << ":" << localTime->tm_min << ":" << localTime->tm_sec << endl;

    // Display calendar for the current month
    displayCalendar(currentMonth, currentYear);

    return 0;
}
//calendar