#include <iostream>
#include <vector>
#include <string>
using namespace std;

//---------------------- Book Class ----------------------
class Book
{
public:
    string title;
    string author;
    string ISBN;
    string genre;
    bool isBorrowed;

    // Parameterized Constructor
    Book(string t, string a, string i, string g)
    {
        title = t;
        author = a;
        ISBN = i;
        genre = g;
        isBorrowed = false;
    }
};

//---------------------- Patron Class ----------------------
class Patron
{
public:
    string name;
    vector<string> borrowedBooks;

    // Parameterized Constructor
    Patron(string n)
    {
        name = n;
    }

    void borrowBook(string bookTitle)
    {
        borrowedBooks.push_back(bookTitle);
    }

    void showBorrowedBooks()
    {
        cout << "Books borrowed by " << name << ":\n";
        for (string book : borrowedBooks)
        {
            cout << "- " << book << endl;
        }
    }
};

//---------------------- Loan Class ----------------------
class Loan
{
public:
    Book *book;
    Patron *patron;
    string dueDate;
    double fine;

    Loan(Book *b, Patron *p, string date)
    {
        book = b;
        patron = p;
        dueDate = date;
        fine = 0.0;

        book->isBorrowed = true;
        patron->borrowBook(book->title);
    }

    void displayLoan()
    {
        cout << "\nLoan Details\n";
        cout << "Book      : " << book->title << endl;
        cout << "Borrower  : " << patron->name << endl;
        cout << "Due Date  : " << dueDate << endl;
        cout << "Fine      : Rs. " << fine << endl;
    }
};

//---------------------- Fine Class ----------------------
class Fine
{
public:
    double amount;

    Fine(double a)
    {
        amount = a;
    }

    void showFine()
    {
        cout << "Fine Amount: Rs. " << amount << endl;
    }
};

//---------------------- Library Class ----------------------
class Library
{
public:
    vector<Book> books;
    vector<Patron> patrons;
    vector<Loan> loans;

    void addBook(Book b)
    {
        books.push_back(b);
    }

    void addPatron(Patron p)
    {
        patrons.push_back(p);
    }
};

//---------------------- Main Function ----------------------
int main()
{
    // Create Books
    Book b1("C++ Programming", "Bjarne Stroustrup", "12345", "Programming");
    Book b2("Data Structures", "Mark Allen", "67890", "Education");

    // Create Patrons
    Patron p1("Ali");
    Patron p2("Ahmed");

    // Create Loan
    Loan l1(&b1, &p1, "15-Aug-2026");

    // Display Loan Details
    l1.displayLoan();

    cout << endl;
    p1.showBorrowedBooks();

    return 0;
}
