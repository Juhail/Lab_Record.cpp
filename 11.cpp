// 11. Write a program to create a base class BankAccount with attributes like account_number and
//   balance, and functions deposit() and withdraw().
//   Derive two classes:
//   1. SavingsAccount with data member rate_of_interst and an additional function
//   calculateInterest() and display it.
//   2. CurrentAccount, which requires maintaining a minimum balance and an additional
//   function to calculate servicecharge() and reduce it from the balance, and display the details.
//   Demonstrate inheritance by performing operations on objects of both derived classes.

#include <iostream>
using namespace std;

class bankaccount {
protected:
    int account_number;
    float balance;

public:
    void setaccount(int accNo, float bal) {
        account_number = accNo;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout<<"amount deposited successfully: "<<amount<<endl;
    }

    void withdraw(float amount) {
        if (amount >balance)
            cout<<"Insufficient balance.\n";
        else
            balance -= amount;
            cout<<"amount withdrawn successfully: "<<amount<<endl;
    }

    void display() {
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class savingsaccount : public bankaccount {
private:
    float rate_of_interest;

public:
    void setsavings(int accNo, float bal, float roi) {
        setaccount(accNo, bal);
        rate_of_interest = roi;
    }

    void calculateinterest() {
        float interest = balance * rate_of_interest / 100;
        cout<<"Interest: "<<interest<<endl;
    }

    void show() {
        display();
        calculateinterest();
    }
};

class currentaccount : public bankaccount {
private:
    float minimum_balance = 500;
    float service_charge = 50;

public:
    void setcurrent(int accNo, float bal) {
        setaccount(accNo, bal);
    }

    void servicecharge() {
        if (balance < minimum_balance) {
            balance -= service_charge;
            cout<<"Service charge of "<<service_charge<<" deducted.\n";
        } else {
            cout<<"No service charge.\n";
        }
    }

    void show() {
        servicecharge();
        display();
    }
};

int main() {
    savingsaccount s1;
    s1.setsavings(1234, 1000, 5);
    cout<<"\nSavings Account Details:\n"<<endl;
    s1.show();
    s1.deposit(200);
    s1.withdraw(400);
    s1.show();
    currentaccount c1;
    c1.setcurrent(2001, 400);
    cout<<"\nCurrent Account Details:\n"<<endl;
    c1.show();
    c1.deposit(100);
    c1.withdraw(200);
    c1.show();

}

// Output:
// Savings Account Details:

// Account Number: 1234
// Balance: 1000
// Interest: 50
// amount deposited successfully: 200
// amount withdrawn successfully: 400
// Account Number: 1234
// Balance: 800
// Interest: 40

// Current Account Details:

// Service charge of 50 deducted.
// Account Number: 2001
// Balance: 350
// amount deposited successfully: 100
// amount withdrawn successfully: 200
// Service charge of 50 deducted.
// Account Number: 2001
// Balance: 200
