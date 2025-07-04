#include <iostream>
using namespace std;

main()
{
    float num1, num2;
    cout << "Enter the first number\t";
    cin >> num1;
    cout << endl;

    cout << "Enter the second number\t";
    cin >> num2;
    cout << endl;

    if (num1 < num2)
    {
        cout << num1 << " is lessthen " << num2;
    }
    else if (num1 > num2)
    {
        cout << num1 << " is graterthan " << num2;
    }
    else
    {
        cout << "Both is equal";
    }
}