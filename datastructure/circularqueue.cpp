#include <iostream>
using namespace std;

#define MAX_QUEUE 5 // Maximum size of the queue

// Global variables to manage the queue
int queue[MAX_QUEUE];
int front = 0, back = -1, count = 0;

// Function to enqueue an element
void enqueue(int element) {
    if (count == MAX_QUEUE) {
        cout << "Queue is full. Cannot enqueue " << element << endl;
    } else {
        back = (back + 1) % MAX_QUEUE; // Circular increment
        queue[back] = element;
        count++;
        cout << "Enqueued: " << element << endl;
    }
}

// Function to dequeue an element
void dequeue() {
    if (count == 0) {
        cout << "Queue is empty. Cannot dequeue." << endl;
    } else {
        cout << "Dequeued: " << queue[front] << endl;
        front = (front + 1) % MAX_QUEUE; // Circular increment
        count--;
    }
}

// Function to check if the queue is full
bool isFull() {
    return count == MAX_QUEUE;
}

// Function to check if the queue is empty
bool isEmpty() {


    return count == 0;
}

// Function to display the current queue elements
void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            cout << queue[(front + i) % MAX_QUEUE] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Test enqueue and dequeue operations
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display(); // Display the queue

    enqueue(60); // This will fail since the queue is full

    dequeue(); // Dequeue elements
    dequeue();

    display(); // Display the queue after dequeue operations

    enqueue(60); // This will work now after two elements are dequeued

    display(); // Display the queue

    return 0;
}

