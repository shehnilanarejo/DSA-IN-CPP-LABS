//Q1:Write implementaion of Enqueue and dequeue operations in a circular queue using array.

/*#include <iostream>
#include <queue>
class CircularQueue {
private:
    std::queue<int> q;
    const int SIZE;
public:
    CircularQueue(int size) : SIZE(size) {}
    void Enqueue(int item) {
        if (q.size() == SIZE) {
            std::cout << "Overflow: Queue is full." << std::endl;
            return;
        }
        q.push(item);
        std::cout << "Enqueued: " << item << std::endl;
    }
    void Dequeue() {
        if (q.empty()) {
            std::cout << "Underflow: Queue is empty." << std::endl;
            return;
        }
        int frontItem = q.front();
        q.pop();
        std::cout << "Dequeued: " << frontItem << std::endl;
    }
};
int main() {
    CircularQueue cq(5);
    cq.Enqueue(1);
    cq.Enqueue(2);
    cq.Enqueue(3);
    cq.Dequeue();
    cq.Dequeue();
    cq.Dequeue();
    cq.Dequeue();  
    return 0;
}
*/

//Q2: Use Queue ADT and implement 1 using built in queue functions.
/*
#include <iostream>
#include <queue>
using namespace std;
#define SIZE 10
queue<int> Queue;
void enqueue(int Item) {
    if (Queue.size() == SIZE) {
        cout << "Overflow" << endl;
        return; 
    }
    Queue.push(Item);
}
int dequeue() {
    if (Queue.empty()) {
        cout << "Underflow" << endl;
        return -1;  
    }
    int Item = Queue.front();
    Queue.pop();
    return Item;
}
int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    cout << "Dequeued item: " << dequeue() << endl;
    enqueue(4);
    return 0;
}
/*
