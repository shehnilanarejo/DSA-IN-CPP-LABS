//Q1:Give implementation of bubble sort algorithm let"s assume Array “A” is consisting of 6elements which are stored in descending order.
/*#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int counter = 1; counter < n; counter++) {
        for (int i = 0; i < n - counter; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

//Q3:Select any other sorting algorithm and implement. Assume A[]={ 9,7,5,11,12,2,14,3,10,6}

/*
#include <iostream>
#include <algorithm> // For std::swap
using namespace std;
int main() {
    const int size = 6;
    int A[size];
       cout << "Enter " << size << " elements in descending order:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> A[i];
    }
    // Bubble Sort algorithm
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (A[j] < A[j + 1]) {
                swap(A[j], A[j + 1]);
            }
        }
    }
    cout << "\nSorted array in ascending order:\n";
    for (int i = 0; i < size; ++i) {
        cout << A[i] << " ";
    }
    return 0;}*/

#include <iostream>
#include <algorithm> // For std::swap
using namespace std;
int main() {
    const int size = 10;
    int A[size] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    // Displaying the original array
    cout << "Original array:\n";
    for (int i = 0; i < size; ++i) {
        cout << A[i] << " ";
    }
    // Selection Sort algorithm
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            // Find the index of the minimum element in the unsorted part
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        swap(A[i], A[minIndex]);
    }
    // Displaying the sorted array
    cout << "\nSorted array in ascending order using Selection Sort:\n";
    for (int i = 0; i < size; ++i) {
        cout << A[i] << " ";
    }
    return 0;
}

