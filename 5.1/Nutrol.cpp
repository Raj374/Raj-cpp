#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter the number :";
    cin >> num;

    if (num == 0)
    {
        cout << "The number is neutrol";
    }
    if (num > 0)
    {
        cout << "The number is positive";
    }

    if (num < 0)
    {
        cout << "The number is negative";
    }
}
