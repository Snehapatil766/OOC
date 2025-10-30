// C++ program to show unary operator overloading
#include<iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Constructor to initialize the object's value
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (-) operator to perform decrement operation of Distance object
    void operator-() {
        feet--;
        inch--;
        cout << "\nAfter Decrement (Using Unary - Operator):";
        cout << "\nFeet  : " << feet;
        cout << "\nInches: " << inch << endl;
    }
};

// Driver Code
int main() {
    // Student Information Header
    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    Distance d1(8, 9);

    cout << "Original Distance:" << endl;
    cout << "Feet  : " << d1.feet << endl;
    cout << "Inches: " << d1.inch << endl;

    // Use (-) unary operator by single operand
    -d1;

    return 0;
}

