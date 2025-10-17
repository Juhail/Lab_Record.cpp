#include <iostream>
using namespace std;

class Phone {
public:
    void makeCall() {
        cout << "This smartphone can make calls." << endl;
    }
};

class Camera {
public:
    void takePhoto() {
        cout << "This smartphone can take photos." << endl;
    }
};

class Smartphone : public Phone, public Camera {
public:
    void describe() {
        cout << "This is a smartphone:" << endl;
        makeCall();
        takePhoto();
    }
};

int main() {
    Smartphone myPhone;
    myPhone.describe();

    return 0;
}
