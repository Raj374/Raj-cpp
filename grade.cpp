#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter your score (0 - 100): ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks" << endl;
        
    }

    grade = (marks >= 91 && marks <= 100)  ? 'A'
            : (marks >= 81 && marks <= 90) ? 'B'

            : (marks >= 71 && marks <= 80) ? 'C'

            : (marks >= 61 && marks <= 70) ? 'D'

                                           : 'F';

    cout << "Grade: " << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent work!" << endl;
        break;
    case 'B':
        cout << "Good job!" << endl;
        break;
    case 'C':
        cout << "Fair performance." << endl;
        break;
    case 'D':
        cout << "Needs improvement." << endl;
        break;
    case 'F':
        cout << "Failed. Better luck next time." << endl;
        break;
    default:
        cout << "Unexpected grade." << endl;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C')
    {
        cout << "You are eligible for the next level." << endl;
    }
    else
    {
        cout << "You are not eligible for the next level." << endl;
    }
}