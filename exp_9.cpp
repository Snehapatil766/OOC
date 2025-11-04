#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {   // Constructor
        real = r;
        imag = i;
    }

    // Friend declarations for global overloading
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
};

// Overloading the insertion operator (<<)
ostream &operator<<(ostream &out, const Complex &c) {
    out << c.real << " + i" << c.imag << endl;
    return out;
}

// Overloading the extraction operator (>>)
istream &operator>>(istream &in, Complex &c) {
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imag;
    return in;
}

int main() {
    
    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    Complex c1;

    // Uses overloaded >> operator (cin >> c1)
    cin >> c1;

    cout << "\nThe complex object is: ";
    // Uses overloaded << operator (cout << c1)
    cout << c1;

    return 0;
}

