// 2. Write a program to define a class Book with the private members: BookID, BookName, BookPrice,
// and total_cost() to calculate total cost for the number of copies, where n is passed as an argument.
// Write public members

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice;

    float total_cost(int n) {
        return BookPrice * n;
    }

public:
// 1. To input book details

    void getBookDetails() {
        cout << "Enter book id: ";
        cin >> BookID;

        cout << "Enter book name: ";
        cin >> BookName;

        cout << "Enter book price: ";
        cin >> BookPrice;
    }
// 2. Display book details

    void showDetails() {
        cout << "Book ID    : " << BookID << endl;
        cout << "Book Name  : " << BookName << endl;
        cout << "Book Price : Rs." << BookPrice << endl;
    }
// 3. To input the number of copies required and display the Total cost to be paid.

    void showTotalCost() {
        int copies;
        cout << "Enter number of copies: ";
        cin >> copies;

        float total = total_cost(copies);
        cout << "Total Cost : Rs." << total << endl;
    }
};
// Create 3 Book objects and calculate the Total cost to be paid for each purchase.

int main() {
    Book b1, b2, b3;

    cout << "Enter details of Book 1:\n";
    b1.getBookDetails();

    cout << "\nEnter details of Book 2:\n";
    b2.getBookDetails();

    cout << "\nEnter details of Book 3:\n";
    b3.getBookDetails();

    cout << "\n--- BOOK DETAILS ---\n";

    cout << "\nBook 1:\n";
    b1.showDetails();
    b1.showTotalCost();

    cout << "\nBook 2:\n";
    b2.showDetails();
    b2.showTotalCost();

    cout << "\nBook 3:\n";
    b3.showDetails();
    b3.showTotalCost();

    return 0;
}



// Output :
// Enter details of Book 1:
// Enter book id: 01
// Enter book name: maths
// Enter book price: 100

// Enter details of Book 2:
// Enter book id: 02
// Enter book name: cpp
// Enter book price: 200

// Enter details of Book 3:
// Enter book id: 03
// Enter book name: psychology
// Enter book price: 300

// --- BOOK DETAILS ---

// Book 1:
// Book ID    : 1
// Book Name  : maths
// Book Price : Rs.100
// Enter number of copies: 2
// Total Cost : Rs.200

// Book 2:
// Book ID    : 2
// Book Name  : cpp
// Book Price : Rs.200
// Enter number of copies: 3
// Total Cost : Rs.600

// Book 3:
// Book ID    : 3
// Book Name  : psychology
// Book Price : Rs.300
// Enter number of copies: 1
// Total Cost : Rs.300

