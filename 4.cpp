//4 . write a c++ program to find the area of the circle ,sqaure,rectangle,and triangle using inline functions.

#include <iostream>
#define pi 3.14
using namespace std;

inline float circle(float radius) {
    return pi * radius * radius;
}

inline float square(float side) {
    return side * side;
}

inline float rectangle(float length, float breadth) {
    return length * breadth;
}

inline float triangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius, side, length, breadth, base, height;

    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Area of circle: " << circle(radius) << endl;

    cout << "Enter the side: ";
    cin >> side;
    cout << "Area of square: " << square(side) << endl;

    cout << "Enter the length and breadth: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << rectangle(length, breadth) << endl;

    cout << "Enter the base and height: ";
    cin >> base >> height;
    cout << "Area of triangle: " << triangle(base, height) << endl;

    return 0;
}
//Output :
//
// Enter the radius : 
// 7
// Area of  circle : 153.86
// Enter the side : 
// 5
// Area of sqaure : 25
// Enter the Length and Breadth : 
// 6
// 4
// Area of rectangle : 24
// Enter the base and heigth : 
// 8
// 3
// Area of triangle : 12
