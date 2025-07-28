#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;

    // Input the range
    cout << "Enter the starting year: ";
    cin >> startYear;

    cout << "Enter the ending year: ";
    cin >> endYear;

    cout << "Leap years between " << startYear << " and " << endYear << " are:\n";

    // Loop through the years using a while loop
    while (startYear <= endYear) {
        // Check if the year is a leap year
        if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) {
            cout << startYear <<" ";
        }
        startYear++;
    }

    cout << endl;

}