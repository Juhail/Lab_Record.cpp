// 5. Write a C++ program to find area of circle, square, rectangle and triangle using function overloading

#include <iostream>
using namespace std;

class Math {
public:
    float area(float radius) {
        return 3.14 * radius * radius;
    }

    int area(int side) {
        return side * side;
    }

    float area(float length, float width) {
        return length * width;
    }

    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    Math m;
    float radius, length, width;
    int side;
    double base, height;

    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of Circle: " << m.area(radius) << endl;

    cout << "Enter side: ";
    cin >> side;
    cout << "Area of Square: " << m.area(side) << endl;

    cout << "Enter length and width: ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << m.area(length, width) << endl;

    cout << "Enter base and height: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << m.area(base, height) << endl;

    return 0;
}

//Output :
//
// Enter radius: 7
// Area of Circle: 153.86
// Enter side: 5
// Area of Square: 25
// Enter length and width: 6
// 4
// Area of Rectangle: 24
// Enter base and height: 8
// 3
// Area of Triangle: 12
