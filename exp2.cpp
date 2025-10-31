#include <iostream>
using namespace std;

class Complex {
public:
    int real;       // To store real part
    int imaginary;  // To store imaginary part

    // Default constructor
    Complex() {
        real = 0;
        imaginary = 0;
    }

    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Function to add two complex numbers
    Complex addComplexNumber(Complex C1, Complex C2) {
        Complex res;
        res.real = C1.real + C2.real;
        res.imaginary = C1.imaginary + C2.imaginary;
        return res;
    }
};

int main() {
    // Student Information Header
    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    // First Complex number
    Complex C1(4, 5);
    cout << "Complex number 1: " << C1.real << " + i" << C1.imaginary << endl;

    // Second Complex number
    Complex C2(8, 9);
    cout << "Complex number 2: " << C2.real << " + i" << C2.imaginary << endl;

    // Adding two complex numbers
    Complex C3;
    C3 = C3.addComplexNumber(C1, C2);
    cout << "Sum of complex numbers: " << C3.real << " + i" << C3.imaginary << endl << endl;

    // Second test
    Complex A(2, 7);
    cout << "Complex number 1: " << A.real << " + i" << A.imaginary << endl;

    Complex B(10, 6);
    cout << "Complex number 2: " << B.real << " + i" << B.imaginary << endl;

    Complex C;
    C = C.addComplexNumber(A, B);
    cout << "Sum of complex numbers: " << C.real << " + i" << C.imaginary << endl;

    return 0;
}


