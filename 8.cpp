// 8. C++ program to illustrate the use of unary operator overloading, increment ++ operator overloading 
//for count =4
#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter() {
        count = 4;
    }

    void display() {
        cout << "Count: " << count << endl;
    }

   
    void operator++() {
        count = count + 1;
    }
};

int main() {
    Counter c;

    c.display(); 

    ++c;          
    c.display();

    ++c;
    c.display();

   
}

// Output:
// Count: 4
// Count: 5
// Count: 6
