#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) 
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    LinkedList()
    {
        this->head = NULL;
        this->count = 0;
    }

     void instert(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL || this->count == 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            Node *ptr = this->head;

            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        this->count++;
    }

    void update(int data, int position)
    {
        if (head == NULL || count == 0)
        {
            cout << endl
                 << "List is empty.." << endl;
            return;
        }

        if (position < 0 && position > count)
        {
            cout << endl
                 << "position Invalid.." << endl;
        }

        Node *ptr = this->head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = data;
        ptr = NULL;
    }



    void deleteAnyPosition(int position)
    {
        if (head == NULL || count == 0)
        {
            cout << endl
                 << "List is empty.." << endl;
            return;
        }

        if (position < 0 && position > count)
        {
            cout << endl
                 << "position Invalid.." << endl;
        }

        Node *prev = this->head;
        Node *current = this->head;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
        }
        for (int i = 0; i < position - 1; i++)
        {
            prev = prev->next;
        }
        prev->next = current->next;
        delete current;
        current = NULL;

        prev = NULL;
        delete prev;
        this->count--;
    }

    void displayAllNodes()
    {
        Node *ptr = this->head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl
             << endl;
    }
};

int main()
{
    LinkedList l1;

    int choice, data, position;

    do
    {
        cout << endl;
        cout << "Press 1 for Insert from ending.." << endl;
        cout << "Press 2 for Update" << endl;
        cout << "Press 3 for Delete from At any position.." << endl;
        cout << "Press 4 for Display all Nodes.." << endl;
        
        cout << "Press 0 for Exit.." << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Element : ";
            cin >> data;
            l1.instert(data);
            break;
        case 2:
            cout << "Enter Element : ";
            cin >> data;
            cout << "Enter Position : ";
            cin >> position;
            l1.update(data, position);
            break;

        case 3:
            cout << "Enter Position : ";
            cin >> position;
            l1.deleteAnyPosition(position);
            break;

        case 4:
            cout << endl
                 << "Display All Nodes : ";
            l1.displayAllNodes();
            break;
        case 0:
            cout << endl
                 << "Exit.." << endl
                 << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice." << endl;
        }
    } while (choice != 0);
}