#include <iostream>
using namespace std;

class Sumx{
 protected:
  int a,b,c;
};

class Sumy:public Sumx{
    // setter

    public:
 void setsumdata(){
     cout<<"Enter first number :";
     cin>>this->a;
     cout<<"Enter second number :";
     cin>>this->b;
     cout<< "Enter third number :";
     cin>>this->c;
 }
   
    // getter
    void getsumdata(){
     
        int sum = {(a * a* a)+(b * b* b)+(c * c * c)};

        cout<< "sum of cube : "<<sum;
    }

};
