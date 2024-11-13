#include <iostream>
#include <string>
using namespace std;




void enqueue(int value) {
        if (rear == 4) { 
            cout << "Queue is full\n";
        } else {
            if (front == -1) front = 0; // if empty
            queue[++rear] = value;
            cout << "Enqueued: " << value << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Dequeued: " << queue[front++] << endl;
            if (front > rear) front = rear = -1; // RESET the q
        }
    }

void enqueueCircular(int value) {
        if ((rear + 1) % 5 == front) { // check full or no
            cout << "Queue is full\n";
            return;
        } else {
            if (front == -1) front = 0; // if empty
            rear = (rear + 1) % 5; // circle to first of array
            queue[rear] = value;
            cout << "Enqueued: " << value << endl;
        }
    }

    void dequeueCircular() {
        if (front == -1) {
            cout << "Queue is empty\n";
        } else {
            cout << "Dequeued: " << queue[front] << endl;
            if (front == rear) { // if empty
                front = rear = -1;
            } else {
                front = (front + 1) % 5; // circle
            }
        }
    }
int main() {
//FIFO 
//Enqueue, Dequeue 
//Linear queue-> waste of storage(cuz blocks might left empty)
//Linear can be full
//Circular Queue :empty indexes of queue -> reUse
//Circular is Optimizer
// the one after rear is always empty

int front, rear;
int queue[5];
front = rear = -1;

}
