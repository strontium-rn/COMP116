// Implement books issuing components of a library. Define a class "Book" having data members: "name" and "author" both of type string.

// Derive two classes referenceBook and issuableBook having the following details:

// genre: Store genre details of the book (string).
// lateReturn: Store the number of days of late submission of the book.
// fine: Integer data member to store the fine amount.
// Reference books can be issued for 1 day and a fine of Rs. 5/day is applied after 1 day of late return.
// Issuable books can be issued for 30 days and a fine of Rs. 1/day is applied after 30 days of late return.
// issueID: Unique integer data member (starts with 1 and auto-incremented by 1 with every issue).
#include<iostream>
#include<string>
using namespace std;

// Base class Book
class Book {
protected:
    string name;
    string author;
public:
    Book(string n, string a) : name(n), author(a) {}

    // Virtual function for displaying information (for runtime polymorphism)
    virtual void displayInfo() const = 0; // Pure virtual function
};

// Derived class ReferenceBook
class ReferenceBook : public Book {
private:
    string genre;
    int lateReturn;
    int fine;
public:
    ReferenceBook(string n, string a, string g, int late) 
        : Book(n, a), genre(g), lateReturn(late) {
        fine = (lateReturn > 1) ? (lateReturn - 1) * 5 : 0;  // Rs. 5/day after 1 day late
    }

    void displayInfo() const override {
        cout << "Reference Book Information:" << endl;
        cout << "Name: " << name << ", Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Late return by: " << lateReturn << " day(s)" << endl;
        cout << "Fine: Rs. " << fine << endl;
    }
};

// Derived class IssuableBook
class IssuableBook : public Book {
private:
    string genre;
    int lateReturn;
    int fine;
    static int issueID;
public:
    IssuableBook(string n, string a, string g, int late) 
        : Book(n, a), genre(g), lateReturn(late) {
        fine = (lateReturn > 30) ? (lateReturn - 30) * 1 : 0;  // Rs. 1/day after 30 days late
        issueID++;
    }

    void displayInfo() const override {
        cout << "Issuable Book Information:" << endl;
        cout << "Name: " << name << ", Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Issue ID: " << issueID << endl;
        cout << "Late return by: " << lateReturn << " day(s)" << endl;
        cout << "Fine: Rs. " << fine << endl;
    }
};

// Initialize static member
int IssuableBook::issueID = 1;

int main() {
    // Create a reference book with late return of 2 days
    ReferenceBook refBook("Advanced Mathematics", "John Smith", "Education", 2);

    // Create an issuable book with late return of 5 days
    IssuableBook issBook("Harry Potter", "J.K. Rowling", "Fiction", 5);

    // Display information using runtime polymorphism
    Book* books[2];
    books[0] = &refBook;
    books[1] = &issBook;

    for (int i = 0; i < 2; i++) {
        books[i]->displayInfo();
        cout << "-----------------------------" << endl;
    }

    return 0;
}
