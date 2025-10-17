// 9. Perform matrix addition using operator overloading
#include <iostream>
using namespace std;

class Matrix {
    int mat[2][2];
public:
    void input() {
        cout << "Enter 4 elements(2x2):\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m) {
        Matrix temp;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }
};

int main() {
    Matrix m1, m2, result;

    cout << "Enter elements of first matrix:\n";
    m1.input();

    cout << "\nEnter elements of second matrix:\n";
    m2.input();

    result = m1 + m2;

    cout << "\nSum of the two matrices:\n";
    result.display();

    return 0;
}

//Output:
//
// Enter elements of first matrix:
// Enter 4 elements(2x2):
// 2
// 4
// 1
// 8

// Enter elements of second matrix:
// Enter 4 elements(2x2):
// 1
// 7
// 9
// 6

// Sum of the two matrices:
// 3 11 
// 10 14 
