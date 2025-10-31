#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// First subclass
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is a Car\n";
    }
};

// Second subclass
class Bus : public Vehicle {
public:
    Bus() {
        cout << "This Vehicle is a Bus\n";
    }
};

int main() {
   
    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    // Creating objects of subclasses will also invoke base class constructor
    Car obj1;
    Bus obj2;

    return 0;
}


