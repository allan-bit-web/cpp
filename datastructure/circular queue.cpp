#include <iostream>
using namespace std;

// Define the maximum size of the circular queue
#define N 5

// Circular Queue variables
int queue[N];
int front = -1;
int rear = -1;

// Check if the queue is empty
bool isEmpty() {
    return (front == -1 && rear == -1);
}

// Check if the queue is full
bool isFull() {
    return ((rear + 1) % N == front);
}

// Add an element to the queue
void enqueue(int x) {
    if (isFull()) {
        cout << "Queue is full! Cannot enqueue " << x << endl;
        return;
    }

    else if (isEmpty()) { // First element being inserted
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % N; // Circular increment
    }

    queue[rear] = x;
    cout << "Enqueued: " << x << endl;
}

// Remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty! Cannot dequeue." << endl;
        return;
    }

    cout << "Dequeued: " << queue[front] << endl;

    if (front == rear) { // Only one element in the queue
        front = -1;
        rear = -1; // Reset queue
    } else {
        front = (front + 1) % N; // Circular increment
    }
}

// Get the front element of the queue
int peek() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return queue[front];
}

// Display the queue elements
void display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % N; // Circular increment
    }
    cout << endl;
}

// Driver code
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(60);
    enqueue(70);

    display();

    cout << "Front element: " << peek() << endl;

    return 0;
}

