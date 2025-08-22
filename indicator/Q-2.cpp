#include <iostream>
using namespace std;
int cube(int *x) {
    return (*x) * (*x) * (*x);
}

int main() {
    int n;
    cout << "Enter array's size: ";
    cin >> n;

    int a[10][10];  
    cout << "Enter array elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin >> a[i][j];
        }
    }

    cout << "Cubes of all elements:"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << cube(&a[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}