#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int year;
    string author;
    string publisher;
    double price;

public:
    // Default Constructor
    Book() : title("Unknown"), year(0), author("Unknown"), publisher("Unknown"), price(0.0) {
        cout << "Book object created!" << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book object destroyed!" << endl;
    }

    // Function to get data from the user
    void getData() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
        cout << "Enter publisher name: ";
        getline(cin, publisher);
        cout << "Enter year of publication: ";
        cin >> year;
        cout << "Enter price of the book: ";
        cin >> price;
        cin.ignore(); // Clear the newline from the input buffer
    }

    // Function to print the book information
    void print() const {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }

    // Function to check the price of the book
    void checkPrice() const {
        cout << "The price of the book is: $" << price << endl;
    }

    // Function to check the publisher of the book
    void checkPublisher() const {
        cout << "The publisher of the book is: " << publisher << endl;
    }
};

int main() {
    // Create an object of Book
    Book myBook;

    // Get data for the book
    myBook.getData();

    // Print book details
    myBook.print();

    // Check price and publisher
    myBook.checkPrice();
    myBook.checkPublisher();

    return 0;
}
