//3. Write a program to create a Rectangle class with two private data members: length and width.
//   Create a default constructor that initialises both members to 0 and a parameterized constructor.
//   Create two different objects of class Rectangle using these different types of constructors and display
//   their values using a member function. Write a destructor that prints a message when an object is destroyed

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    
    Rectangle() {
        length = 0;
        width = 0;
        
    }

   
    Rectangle(int l, int w) {
        length = l;
        width = w;
        
    }

    
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    
    ~Rectangle() {
        cout << "Destructor called  Length: " << length
             << ", Width: " << width << endl;
    }
};

int main() {
    
    Rectangle r1;
    r1.display();

    
    Rectangle r2(10, 5);
    r2.display();
}

//Output:
//
// Length: 0, Width: 0
// Length: 10, Width: 5
// Destructor called  Length: 10, Width: 5
// Destructor called  Length: 0, Width: 0
