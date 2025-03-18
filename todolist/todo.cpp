#include <iostream>
using namespace std;

#define MAX_TASKS 100 // Maximum number of tasks

// Structure to hold task details
struct Task {
    string description;
    string deadline;
    string priority;
    bool completed;
};

// Array to store tasks
Task tasks[MAX_TASKS];
int taskCount = 0; // Track number of tasks

// Function to display all tasks
void displayTasks() {
    if (taskCount == 0) {
        cout << "No tasks in your to-do list.\n";
        return;
    }

    cout << "\n My To Do List:\n";
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i].description
             << " | Deadline: " << tasks[i].deadline
             << " | Priority: " << tasks[i].priority
             << " | Status: " << (tasks[i].completed ? "✅ Completed" : "⏳ Pending") << endl;
    }
}

// Function to mark a task as completed
void completeTask() {
    int taskNumber;
    cout << "Enter task number to mark as completed: ";
    cin >> taskNumber;
    cin.ignore(); // Ignore newline character

    if (taskNumber < 1 || taskNumber > taskCount) {
        cout << "Invalid task number!\n";
        return;
    }

    tasks[taskNumber - 1].completed = true;
    cout << "✅ Task marked as completed!\n";
}

int main() {
    int choice;

    do {
        cout << "\n  To-Do List Menu:\n";
        cout << "1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // Ignore newline

        if (choice == 1) {
            if (taskCount >= MAX_TASKS) {
                cout << "❌ Task list is full! Cannot add more tasks.\n";
                continue;
            }
            cout << "Enter task description: ";
            getline(cin, tasks[taskCount].description);
            cout << "Enter deadline: ";
            getline(cin, tasks[taskCount].deadline);
            cout << "Enter priority (High/Medium/Low): ";
            getline(cin, tasks[taskCount].priority);
            tasks[taskCount].completed = false;
            taskCount++; // Increase task count
            cout << "✅ Task added!\n";
        } 
        else if (choice == 2) {
            displayTasks();
        } 
        else if (choice == 3) {
            completeTask();
        } 
        else if (choice == 4) {
            cout << "Exiting program. Have a productive day! 🚀\n";
        } 
        else {
            cout << "Invalid option! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
