// Write a Program to find Simple interest.

#include<iostream>
using namespace std;

main()
{
    float p, r, n;
    cout<<"Enter value of principal: ";
    cin >> p;
    cout<<endl;
    cout<<"Enter value of rate: ";
    cin >> r;
    cout<<endl;
    cout<<"Enter value of time: ";
    cin >> n;
    cout<< p *r*n/100 <<endl;
}