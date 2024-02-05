// Q1:Let an array named LA consist of 4 elements 2,4,6 & 8 . write down the code to traverse(or print) all elements in the array.
/*
#include<iostream>
using namespace std;
int main(){
	int LA[4] = {2, 4, 6, 8};
	int lenght = sizeof(LA) / sizeof(LA[0]);
	for (int i=0; i< lenght; i++){
		cout<<"LA ["<<i<<"] = "<<LA[i]<<endl;
	}
	return 0;
}
*/

//Q2:Use insertion algorithm to add an element (Give implementation)
//1 at index 0 ii.	5 at index 2	iii. 3 at index 4
/*
#include<iostream>
using namespace std;
int insertion(int *a,int index,int item, int n) {
int i = n - 1;
while (i >= index)
{
*(a + i + 1) = *(a + i);
i--;
}
*(a + index) = item;
n++;
return n;
}
int main()
{
int A[8] = {2, 4, 6, 8};
int length = 4;
int* p = A;
int x, y;
cout << "Enter the item you want to insert: ", cin >> x;
cout << "Enter the index on which the item will be inserted: ", cin >> y;
length=insertion(p, y, x, length);
cout << "Array after insertion: " << endl;
for (int i = 0; i < length; i++) {
cout << A[i]<<" ";
}
cout << endl;
return 0;
}
*/

//Q4:Consider the array in question 2 ,Use deletion algorithm(Give implementation) to remove an element
//1 at index 0 ii. 5 at index 2	iii. 3 at index 4

/*
#include<iostream>
using namespace std;
int deletion(int *a,int index,int item, int n) {
int i = n - 1;
while (index<i)
{
*(a + index) = *(a + index + 1);
index++;
}
n--;
return n;
}
int main()
{
int A[8];
int length;
int* p = A;
int x, y;
cout << "Enter the length of the array: ", cin >> length;
cout << "Enter the array you want to perform deletion on: " << endl;
for (int j = 0; j < length; j++)
{
cin >> A[j];
}
cout << "Enter the item you want to delete: ", cin >> x;
cout << "Enter the index of the item to be deleted: ", cin >> y;
length=deletion(p, y, x, length);
cout << "Array after deletion: " << endl;
for (int i = 0; i < length; i++) {
cout << A[i]<<" ";
}
cout << endl;
return 0;
}
*/







