#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter Row Size : ";
    cin >> row;
    cout << "Enter Column Size : ";
    cin >> col;

    int a[row][col];
    cout << "Enter Matrix Elements:";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> a[i][j];

   

    return 0;
}