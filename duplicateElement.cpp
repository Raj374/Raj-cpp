#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter size of array ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)




     
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < size; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}