#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char *p = str;
    int count = 0;

    while (*p) {   
        count++;
        p++;
    }
cout << "Length = " << count;
    return 0;
}
