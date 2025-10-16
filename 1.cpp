// 1.Write a program to define a class Car with attributes like Brand,Model,and year .Write member functions of the following :

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand, model;
    int year;

public:
// a) to read data members

    void readData() {
        cout << "Enter brand of the car: ";
        cin >> brand;
        cout << "Enter model of the car: ";
        cin >> model;
        cout << "Enter manufactured year: ";
        cin >> year;
    }

// b) to display car details 

    void showDetails() {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
    }
};

// Create three car objects with different with different attributes and dispaly details of each one.

int main() {
    Car car1, car2, car3;

    cout << "Enter details of Car 1:\n";
    car1.readData();

    cout << "\nEnter details of Car 2:\n";
    car2.readData();

    cout << "\nEnter details of Car 3:\n";
    car3.readData();

    cout << "\nDETAILS OF CARS :\n\n";

    cout << "Car 1 Details:\n";
    car1.showDetails();

    cout << "\nCar 2 Details:\n";
    car2.showDetails();

    cout << "\nCar 3 Details:\n";
    car3.showDetails();

    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Output :
// Enter details of Car 1:
// Enter brand of the car: Toyota
// Enter model of the car: Fortuner
// Enter manufactured year: 2016

// Enter details of Car 2:
// Enter brand of the car: Bmw
// Enter model of the car: M5
// Enter manufactured year: 2018

// Enter details of Car 3:
// Enter brand of the car: Mercedes
// Enter model of the car: Amg1
// Enter manufactured year: 2022

// DETAILS OF CARS :

// Car 1 Details:
// Brand : Toyota
// Model : Fortuner
// Year  : 2016

// Car 2 Details:
// Brand : Bmw
// Model : M5
// Year  : 2018

// Car 3 Details:
// Brand : Mercedes
// Model : Amg1
// Year  : 2022

