#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int mod(int a, int b) {
    if (b == 0) {
        cout << "Error" << endl;
        return 0;
    }
    return a % b;
}
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int option, num1, num2;

    while (option!=0) {
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for exit" << endl;

        cout << " Enter your option: ";
        cin >> option;
       if (option == 0) {
            cout << "Exiting program.." << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (option) {
            case 1:
                cout << add(num1, num2) << endl;
                break;
            case 2:
                cout  << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << divide(num1, num2) << endl;
                break;
            case 5:
                cout << mod(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

         
    }

    return 0;
}
