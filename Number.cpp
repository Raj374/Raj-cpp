#include <iostream>
using namespace std;

main()
{
    int num;
    cout << "Enter your number";
    cin >> num;

    (num < 0) ? cout << num << "is negative"
              : cout << num << "is positive";
}