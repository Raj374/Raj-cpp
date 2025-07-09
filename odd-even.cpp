#include <iostream>
using namespace std;

main()
{

    int num;
    cout << "Enter a number";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " num is Even";
    }
    else
    {
        cout << num << " num is Odd";
    }

    // Check divisibility by 5
    if (num % 5 == 0)
    {
        cout << " and Divisible by 5." << endl;
    }
    else
    {
        cout << " and Not divisible by 5." << endl;
    }
}
