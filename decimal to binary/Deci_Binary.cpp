#include <iostream>
#define MAX 100
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;
    int len;

public:
    //constructor
    Stack (int size)
    {
        this -> size = size;
        this -> arr = new int [size];
        this -> top = -1;
        this -> len = 0;
    }

    //distructor
    ~Stack()
    {
        delete[] arr;
    }

    //mathod

    void push (int element)
    {
        if (this->top == this->size - 1)
        {
            cout << "Stack is overflow..." << endl;
        }
        else{
            this -> top++;
            this -> arr[this -> top] = element;
            this -> len++;
        }
    }

    void pop ()
    {
        if (this -> top == -1)
        {
            cout << "Stack is underflow..." << endl;
        }
        else{
            this -> top--;
            this -> len--;
        }
    }

    
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty..." << endl;
        }
        else{
            for(int i = this->top; i >= 0; i--)
            {
                cout << this -> arr[i] << " ";
            }
        }
        cout << endl;
    }

      bool isEmpty()
    {
        if (top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack stack(MAX);
    int num;

    cout << "Enter any number : ";
    cin >> num;

    while (num != 0)
    {
        int rem = num % 2;

        stack.push(rem);
        num = num / 2;
    }

    stack.display();
}