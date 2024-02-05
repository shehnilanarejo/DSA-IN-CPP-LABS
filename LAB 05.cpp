//Q1:Give implementations of Push &amp; Pop Algorithms with underflow &amp; Overflow exceptions

/*#include<iostream>
using namespace std;
const int MAX_SIZE = 3;
class stack{
	private:
		int arr[MAX_SIZE];
		int top;
	public:
	    stack() : top(-1){}
void push(int value){
	if (top >= MAX_SIZE -1){
		cout<<"STACK IS OVERFLOW \t"<<endl;
	}
	else{
		arr[++top] = value;
		cout<<value<<"PUSH TO STACK \t"<<endl;
	}}		
void pop(){
	if (top<0){
		cout<<"STACK IS UNDERFLOW "<<endl;
	}
	else{
		cout<<arr[top--]<<"POP FROM STACK "<<endl;
	}
}
};
int main(){
	stack mystack;
	mystack.push(3);
	mystack.push(4);
	mystack.push(44);
	mystack.push(46);
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	
	return 0;
	
}*/

//Q3:Use Stack ADT and implement logic to get same string that was provided by user
//Eg. Input= data Structure
//Output: data Structure
//Hint : Use two stacks(Stack1 &amp; Stack2)
/*
#include <iostream>
#include <string>

using namespace std;

bool isSameString(const string& input) {
    for (size_t i = 0; i < input.length() / 2; ++i) {
        if (input[i] != input[input.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Check if the string is the same when read backward
    if (isSameString(input)) {
        cout << "Output: " << input << endl;
    } else {
        cout << "Output: Strings are not the same." << endl;
    }

    return 0;
}
*/

