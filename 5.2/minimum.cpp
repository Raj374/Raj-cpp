#include <iostream>
using namespace std;

main(){
    int a,b,c;
    cout<<"enter the value of a :";
    cin>>a;

    cout<<"enter the value of b :";
    cin>>b;

    cout<<"enter the value of c :";
    cin>>c;

      if (a < b) {
        if (a < c) {
            cout<<"minimum number is "<<a;
        } else {
            cout<<"minimum number is "<<c;
        }
    } else {
        if (b < c) {
             cout<<"minimum number is "<<b;
        } else {
             cout<<"minimum number is "<<c;
        }
    }
}