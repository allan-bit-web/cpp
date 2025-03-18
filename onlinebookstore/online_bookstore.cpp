#include <iostream>
#include <string>

using namespace std;

#define  MAX_BOOKS  100  // Maximum number of books

// Structure to store book details
struct Book {
    int id;
    string title;
    string author;
    double price;
    int stock;
};

// Bookstore class without using vector
class Bookstore {
private:
    Book books[MAX_BOOKS]; // Fixed-size array
    int bookCount = 0;
    int nextId = 1;

public:
    // Function to add a book
    void addBook(string title, string author, double price, int stock) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount] = {nextId++, title, author, price, stock};
            bookCount++;
            cout << "Book added successfully!\n";
        } else {
            cout << "Bookstore is full, cannot add more books.\n";
        }
    }

    // Function to display books
    void displayBooks() {
        if (bookCount == 0) {
            cout << "No books available.\n";
            return;
        }
        cout << "\nAvailable Books:\n";
        for (int i = 0; i < bookCount; i++) {
            cout << "ID: " << books[i].id << " | Title: " << books[i].title << " | Author: " << books[i].author
                 << " | Price: $" << books[i].price << " | Stock: " << books[i].stock << "\n";
        }
    }


    // Function to purchase a book
    void purchaseBook(int id) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id) {
                if (books[i].stock > 0) {
                    books[i].stock--;
                    cout << "You purchased \"" << books[i].title << "\". Thank you!\n";
                } else {
                    cout << "Sorry, \"" << books[i].title << "\" is out of stock.\n";
                }
                return;
            }
        }
        cout << "Book ID not found.\n";
    }
};

// Main function
int main() {
    Bookstore store;
    int choice;

    do {
        cout << "\nOnline Bookstore Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Purchase Book\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore(); // Clear input buffer
        if (choice == 1) {
            string title, author;
            double price;
            int stock;
            cout << "Enter title: ";
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter stock quantity: ";
            cin >> stock;
            store.addBook(title, author, price, stock);
        } else if (choice == 2) {
            store.displayBooks();
        } else if (choice == 3) {
            int id;
            cout << "Enter book ID to purchase: ";
            cin >> id;
            store.purchaseBook(id);
        } else if (choice == 4) {
            cout << "Thank you for using the bookstore!\n";
        } else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
