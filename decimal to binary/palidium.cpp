#include <iostream>
#include <string.h>
using namespace std;

class Stack
{
private:
    char *arr;
    int size;
    int top;
    int len;

public:
    //constructor
    Stack (int size)
    {
        this -> size = size;
        this -> arr = new char [size];
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

        }
        else{
            this -> top++;
            this -> arr[this -> top] = element;
            this -> len++;
        }
    }

    char pop ()
    {
        if (this -> top == -1)
        {
            return ' ';
        }
        else{
            return arr[top--];
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

    bool isPalidrom(string str)
    {
        for (char ch : str)
            this -> push(ch);

        for (char ch : str)
        {
            if (ch != pop())
                return false;
        }
        return true;
    }

};

int main()
{
    string str;

    cout << endl << "Enter any string : ";
    cin >> str;

    Stack stack((str.size()));

    for (char ch : str)
    {
        stack.push(ch);
    }

    if(stack.isPalidrom(str))
    {
        cout << endl << "String is Palidrom..." << endl << endl;
    }
    else{
        cout << endl << "String is not Palidrom..." << endl << endl;
    }
}