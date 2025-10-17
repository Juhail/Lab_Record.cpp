// 14. Write a C++ program to define a class Student with data members Name, Rollno, and Course.
//    Derive a class Test from a student with data members as marks in 3 subjects. Derive a class
//    GraceMarks from a student with a data member BonusMark. Derive a class result from both Test and
//    Gracemarks and calculate the Total marks. Display the result with all the details. Use the concept of a
//    Virtual base class.

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll_no;
    string course;

public:
    void student_details(string n, int r, string c) {
        name = n;
        roll_no = r;
        course = c;
    }
};

class Test : virtual public Student {
protected:
    int mark1, mark2, mark3;

public:
    void mark(int m1, int m2, int m3) {
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }
};

class GraceMarks : virtual public Student {
protected:
    int bonus_mark;

public:
    void bonus(int b) {
        bonus_mark = b;
    }
};

class Result : public Test, public GraceMarks {
public:
    void show() {
        int total = mark1 + mark2 + mark3 + bonus_mark;
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Bonus Marks: " << bonus_mark << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;
    r.student_details("Rahul", 205, "Mechanical");
    r.mark(75, 82, 88);
    r.bonus(4);
    
    r.show();

    return 0;
}

//Output :
//
// Student Name: Rahul
// Roll Number: 205
// Course: Mechanical
// Marks: 75, 82, 88
// Bonus Marks: 4
// Total Marks: 249
