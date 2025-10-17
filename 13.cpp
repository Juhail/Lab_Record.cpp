// 13. Write a C++ program to explain virtual functions by creating a base class c_polygon, which has a
// virtual function area(). Two classes, c_rectangle and c_traingle, are derived from c_polygon, and
// these classes have area() to calculate and return the area of a rectangle and a triangle, respectively.

#include <iostream>
using namespace std;

class c_polygon {
public:
    virtual float area() {
        return 0;
    }
};

class c_rectangle : public c_polygon {
private:
    float width, height;
public:
    c_rectangle(float w, float h) : width(w), height(h) {}
    float area() {
        return width * height;
    }
};

class c_triangle : public c_polygon {
private:
    float base, height;
public:
    c_triangle(float b, float h) : base(b), height(h) {}
    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    c_polygon* p;
    c_rectangle rect(4, 5);
    c_triangle tri(3, 4);

    p = &rect;
    cout<<"Rectangle Area: "<<p->area()<<endl;

    p = &tri;
    cout<<"Triangle Area: "<<p->area()<<endl;

}

//output :
//
// Rectangle Area: 20
// Triangle Area: 6
