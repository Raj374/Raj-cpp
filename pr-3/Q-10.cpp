#include <iostream>
using namespace std;
 main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
        }
        else
        {
            for (int j = 0; j < i; j++)
                cout << char('A' + j) << " ";
        }

        int space = (n - i) * 2;
        for (int s = 1; s <= space; s++)
            cout << "  ";

        if (i % 2 == 1)
        {
            for (int j = i; j >= 1; j--)
                cout << j << " ";
        }
        else
        {
            for (int j = i - 1; j >= 0; j--)
                cout << char('A' + j) << " ";
        }

        cout << endl;
    }
}
