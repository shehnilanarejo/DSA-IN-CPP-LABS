//Q1:Assume array [ ] = {2, 4, 6, 8,}. Give implementation of Linear search algorithm to ;
//find element 8 in array
//find element 3 in array
/*#include <iostream>
using namespace std;
int main() {
    int array[] = {2, 4, 6, 8};
    int target;
    cout << "Enter value you want to search: ";
    cin >> target;
    bool found = false; 
    for (int i = 0; i < 4; i++) {
        if (array[i] == target) {
            found = true;
            cout << "Element was found at index " << i << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element was not found in the array." << endl;
    }
    return 0;
}*/


//Q:2let assume A[]= {2,5,5,5,6,6,8,9,9,9} sorted array of integers containing duplicates, apply 
//binary search algorithm to Count occurrences of a number provided, 
//if the number is not found in the array report that as well. (Give implementation)


/*#include <iostream>
using namespace std;
int main() {
    int A[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int n = 10;
    int target;
    cout << "Enter the number you want to count: ";
    cin >> target;
    int count = 0;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (A[i] == target) {
            count++;
            found = true;
        }
    }

    if (found) {
        cout << "Element " << target << " occurs " << count << " times." << endl;
    } else {
        cout << "Element " << target << " is not found in the array." << endl;
    }

    return 0;
}*/

