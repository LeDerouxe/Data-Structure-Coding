#include <iostream>
#include <string>
#include <queue>
using namespace std;

int Queue[5];
int Front =-1;
int Rear =-1;
void enqueue(int value) {
        if (Rear == 4) {
            cout << "Queue is full\n";
        } else {
            if (Front == -1) Front = 0; // if empty
            Queue[++Rear] = value;
            cout << "EnQueued: " << value << endl;
        }
    }

    void dequeue() {
        if (Front == -1 || Front > Rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "DeQueued: " << Queue[Front++] << endl;
            if (Front > Rear) Front = Rear = -1; // RESET the q
        }
    }

void enqueueCircular(int value) {
        if ((Rear + 1) % 5 == Front) { // check full or no
            cout << "Queue is full\n";
            return;
        } else {
            if (Front == -1) Front = 0; // if empty
            Rear = (Rear + 1) % 5; // circle to first of array
            Queue[Rear] = value;
            cout << "Enqueued: " << value << endl;
        }
    }

    void dequeueCircular() {
        if (Front == -1) {
            cout << "Queue is empty\n";
        } else {
            cout << "Dequeued: " << Queue[Front] << endl;
            if (Front == Rear) { // if empty
                Front = Rear = -1;
            } else {
                Front = (Front + 1) % 5; // circle
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
// the one after Rear is always empty


// q with STL lib
queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    q.pop();

    cout << "After popping, front element: " << q.front() << endl;

    // Checking if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // Getting the size of the queue
    cout << "Queue size: " << q.size() << endl;
}
