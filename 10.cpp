// 10. Create a base class Person with data members name and age, and a member function display().
// Derive a class Student from Person that adds a data member roll_number and a member function showDetails().
// Demonstrate single inheritance by creating an object of the Student class and calling both base and derived class functions. 

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void get_p() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void show_p() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    int roll_num;

public:
    void get_s() {
        get_p();
        cout << "Enter roll number: ";
        cin >> roll_num;
    }

    void show_s() {
        show_p();
        cout << "Roll Number: " << roll_num << endl;
    }
};

int main() {
    Student s;

    cout << "Enter student details:" << endl;
    s.get_s();

    cout << "\nStudent Information:" << endl;
    s.show_s();

    return 0;
}
// Output:
// Enter student details:
// Enter name: Juhail
// Enter age: 19
// Enter roll number: 20

// Student Information:
// Name: Juhail
// Age: 19
// Roll Number: 20
