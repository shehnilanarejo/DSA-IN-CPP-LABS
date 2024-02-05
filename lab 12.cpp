//Q1:Give implementation of depth first search & breadth first search algorithms on graph
//FOR BREATH FIRST SEARCH
/*#include <iostream>
#include <list>
#include <iterator>  // Add this line
using namespace std;
class Graph {
    int v;
    list<int>* l;
public:
    Graph(int x) {
        v = x;
        l = new list<int>[v];
    }
    void addEdge(int a, int b) {
        l[a].push_back(b);
        l[b].push_back(a);
    }
    void displayGraph() {
        for (int i = 0; i < v; i++) {
            cout << "Vertex " << i << " --> ";
            // Add typename before the iterator declaration
            for (typename list<int>::iterator nbr = l[i].begin(); nbr != l[i].end(); ++nbr) {
                cout << *nbr << ",";
            }
            cout << endl;
        }
    }
};
int main() {
    Graph g1(4);
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.displayGraph();
    return 0;
}*/

//FOR DEPTH FIRST SEARCH
/*
#include<iostream>
using namespace std;
class Graph
{
private:
int noOfNodes;
int matrix[10][10];
public:
Graph(int n)
{
noOfNodes = n;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
matrix[i][j] = 0;
}
}
}
void addVertex(int v)
{
noOfNodes++;
for (int i = 0; i < noOfNodes; i++)
{
matrix[i][noOfNodes - 1] = 0;
matrix[noOfNodes-1][i] = 0;
}
cout << "A Vertex has been added!" << endl;
}
void addEdge(int v, int e)
{
if (v >= noOfNodes || e > noOfNodes)
{
cout << "This Vertex does not exist!" << endl;
}
else {
matrix[v][e] = 1;
matrix[e][v] = 1;
cout << "An edge has been added!" << endl;
}
}
void deleteVertex(int v)
{
if (v > noOfNodes) {
cout << "Vertex already not present!" << endl;
}
else {
while (v < noOfNodes)
{
for (int i = 0; i < noOfNodes; i++)
{
matrix[i][v] = matrix[i][v + 1];
matrix[v][i] = matrix[v + 1][i];
}
v++;
}
noOfNodes--;
cout << "A Vertex has been deleted!" << endl;
}
}
void displayAdjacencyMatrix()
{
cout << "\nAdjacency Matrix: ";
for (int i = 0; i < noOfNodes; i++)
{
cout << endl;
for (int j = 0; j < noOfNodes; j++)
{
cout << matrix[i][j] << " ";
}
}
cout << endl;
}
};
int main()
{
int n;
cout << "Enter no of nodes: ", cin >> n;
Graph g1(n);
cout << "Enter 1 if edge exist and 0 if it does not: " << endl;
int a;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
cout << i << " " << j << " :", cin >> a;
if (a == 1) {
g1.addEdge(i, j);
}
}
}
int b;
g1.displayAdjacencyMatrix();
cout << "Enter new vertex: ", cin >> b;
g1.addVertex(b);
g1.displayAdjacencyMatrix();
cout << "Enter a vertex to delete: ", cin >> b;

g1.deleteVertex(b);
g1.displayAdjacencyMatrix();
return 0;
}
*/
