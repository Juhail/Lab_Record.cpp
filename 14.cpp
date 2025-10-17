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
    int rollno;
    string course;

public:
    void setStudent(string n, int r, string c) {
        name = n;
        rollno = r;
        course = c;
    }
};

class Test : virtual public Student {
protected:
    int marks1, marks2, marks3;

public:
    void setMarks(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
};

class GraceMarks : virtual public Student {
protected:
    int bonusMark;

public:
    void setBonus(int b) {
        bonusMark = b;
    }
};

class Result : public Test, public GraceMarks {
public:
    void displayResult() {
        int total = marks1 + marks2 + marks3 + bonusMark;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Marks: "<<marks1<<", "<<marks2<<", "<<marks3<<endl;
        cout<<"Bonus Marks: "<<bonusMark<<endl;
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main() {
    Result r;
    r.setStudent("Alice", 101, "CSE");
    r.setMarks(80, 85, 90);
    r.setBonus(5);
    r.displayResult();

}
//Output :
//
// Name: Alice
// Roll No: 101
// Course: CSE
// Marks: 80, 85, 90
// Bonus Marks: 5
// Total Marks: 260
