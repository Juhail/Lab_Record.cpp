//Write a C++ program to implement a telephone bill class with Name, Address, Tel. No., No. of calls 
//as data members. Compute the amount to be paid if the charges per call is Rs. 2/-. using friend 
//function


#include <iostream>
#include <string>
using namespace std;

class TelephoneBill {
    string Name;
    string Address;
    long TelNo;
    int NoOfCalls;
    float Amount;

public:
    void input() {
        cout << "Enter your name: ";
        getline(cin, Name);
        cout << "Enter your address: ";
        getline(cin, Address);
        cout << "Enter your telephone number: ";
        cin >> TelNo;
        cout << "Enter number of calls made: ";
        cin >> NoOfCalls;
    }

    friend void calculateBill(TelephoneBill &t);
};

void calculateBill(TelephoneBill &t) {
    float charge_per_call = 2.0;
    t.Amount = t.NoOfCalls * charge_per_call;

    cout << "\n\n";
    cout << "Name          : " << t.Name << endl;
    cout << "Address       : " << t.Address << endl;
    cout << "Telephone No. : " << t.TelNo << endl;
    cout << "Calls Made    : " << t.NoOfCalls << endl;
    cout << "Amount to Pay : Rs. " << t.Amount << endl;
}

int main() {
    TelephoneBill T;
    T.input();
    calculateBill(T);
    return 0;
}

//Output:
//
// Enter your name: Juhail
// Enter your address: Mg road
// Enter your telephone number: 932
// Enter number of calls made: 34


// Name          : Juhail
// Address       : Mg road
// Telephone No. : 932
// Calls Made    : 34
// Amount to Pay : Rs. 68
