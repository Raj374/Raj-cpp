#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int last = num % 10; 

    while (num >= 10) {
        num = num / 10;
    }
    int first = num;

    int sum = first + last;

    cout << "The sum of the first and the last digit: " << sum << endl;
}
