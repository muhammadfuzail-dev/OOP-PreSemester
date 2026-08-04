#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Book Class
class Book {
private:
    string title;
    double price;

public:
    // Setter Functions
    void setTitle(string t) {
        title = t;
    }

    void setPrice(double p) {
        price = p;
    }

    // Getter Functions
    string getTitle() {
        return title;
    }

    double getPrice() {
        return price;
    }
};

// Payment Class
class Payment {
private:
    double amount;

public:
    void setAmount(double a) {
        amount = a;
    }

    double getAmount() {
        return amount;
    }
};

// Inventory Class
class Inventory {
private:
    vector<Book> books;

public:
    void addBook(Book b) {
        books.push_back(b);
    }

    void removeBook(string title) {
        for (auto it = books.begin(); it != books.end(); it++) {
            if (it->getTitle() == title) {
                books.erase(it);
                cout << "Book removed successfully.\n";
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void displayInventory() {
        cout << "\nInventory:\n";
        for (Book b : books) {
            cout << "Title: " << b.getTitle()
                 << " | Price: $" << b.getPrice() << endl;
        }
    }
};

// Order Class
class Order {
private:
    vector<Book> books;
    Payment payment;

public:
    void addBook(Book b) {
        books.push_back(b);
    }

    void placeOrder() {
        double total = 0;

        for (Book b : books)
            total += b.getPrice();

        payment.setAmount(total);

        cout << "\nOrder Placed Successfully!\n";
        cout << "Total Payment: $" << payment.getAmount() << endl;
    }

    void displayOrder() {
        cout << "\nOrdered Books:\n";

        for (Book b : books) {
            cout << b.getTitle()
                 << " - $" << b.getPrice() << endl;
        }

        cout << "Total Payment: $" << payment.getAmount() << endl;
    }
};

// Main Function
int main() {

    Inventory inventory;

    Book b1, b2, b3;

    b1.setTitle("C++ Programming");
    b1.setPrice(45.5);

    b2.setTitle("Data Structures");
    b2.setPrice(60);

    b3.setTitle("Operating Systems");
    b3.setPrice(75);

    inventory.addBook(b1);
    inventory.addBook(b2);
    inventory.addBook(b3);

    inventory.displayInventory();

    Order order;

    order.addBook(b1);
    order.addBook(b3);

    order.placeOrder();

    order.displayOrder();

    return 0;
}
