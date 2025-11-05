#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end) {
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    return i ;
}

void quickSort(vector<int> &a, int start, int end) {
    if (start < end) {
        int pivotindex = partition(a, start, end);
        quickSort(a, start, pivotindex - 1);
        quickSort(a, pivotindex + 1, end);
    }
}

int main() {
    vector<int> a;
    int n, element;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> element;
        a.push_back(element);  
    }

    quickSort(a, 0, n-1);

    cout << "Sorted array: ";
    for (int e : a)
        cout << e << " ";

}