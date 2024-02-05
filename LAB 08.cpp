//Q3:Write program to calculate Tower of Hanaoi Puzzle implementation

/*#include<iostream>
using namespace std;
void TOH(int n, char beg, char aux, char end)
{
if (n == 1) {
cout << "Moving disk " << n << " from " << beg << " to " << end << endl;
}
else {
TOH(n - 1, beg, end, aux);
cout << "Moving disk " << n << " from " << beg << " to " << end << endl;
TOH(n - 1, aux, beg, end);
}
}
int main()
{
char peg1 = 'a';
char peg2 = 'b';
char peg3 = 'c';
int d;
cout << "Enter no of disks:", cin >> d;
cout << "This is the Tower of Hanoi Puzzle for "<<d<<" disks and 3 pegs a,b,c" << endl;
TOH(d, peg1, peg2, peg3);
return 0;
}*/

//Q4:Rewrite about implemnation using iterative logic 

/*#include <iostream>
#include <stack>
struct Move {
    int disk;
    char source, destination, auxiliary;
};
void towerOfHanoiIterative(int n, char source, char auxiliary, char destination) {
    std::stack<Move> moves;
    moves.push({n, source, destination, auxiliary});
    while (!moves.empty()) {
        Move currentMove = moves.top();
        moves.pop();
        if (currentMove.disk == 1) {
            std::cout << "Move disk 1 from " << currentMove.source << " to " << currentMove.destination << std::endl;
        } else {
            moves.push({currentMove.disk - 1, currentMove.auxiliary, currentMove.source, currentMove.destination});
            moves.push({1, currentMove.source, currentMove.destination, currentMove.auxiliary});
            moves.push({currentMove.disk - 1, currentMove.source, currentMove.destination, currentMove.auxiliary});
        }
    }
}
int main() {
    int n;
    std::cout << "Enter the number of disks: ";
    std::cin >> n;
    towerOfHanoiIterative(n, 'A', 'B', 'C');
    return 0;
}
*/










































