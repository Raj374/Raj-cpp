#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int middle, int end)
{
    int i = start;
    int j = middle + 1;
    vector<int> temp;

    while (i <= middle && j <= end)
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while (i <= middle)
        temp.push_back(arr[i++]);

    while (j <= end)
        temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++)
        arr[start + k] = temp[k];
}


void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int middle = (start + end) / 2;
        mergeSort(arr, start, middle);
        mergeSort(arr, middle + 1, end);
        merge(arr, start, middle, end);
    }
}



int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[50];
    cout << "---Array Input---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }

    int choice;
    do
    {
        cout << endl
             << "----- MENU -----" << endl;
        cout << "Press 1. Merge Sort" << endl;
        cout << "Press 2. Binary Search" << endl;
        cout << "Press 3. Exit..." << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
      

        case 1:
            mergeSort(arr, 0, size - 1);
            cout << endl
                 << "Array after Merge Sort: ";
            display(arr, size);
            break;


       
        case 2:
        {
            int target;
            cout << endl
                 << "Enter element to search";
            cin >> target;
            int index = binarySearch(arr, size, target);
            if (index != -1)
                cout << "Searching element index : " << index << endl;
            else
                cout << "Element not found!";
            break;
        }

        
        case 3:
            cout << endl
                 << "Exiting program...";
            break;

        default:
            cout << "Invalid choice!";
        }
    } while (choice != 3);

    return 0;
}