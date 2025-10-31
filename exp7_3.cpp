#include <iostream>
using namespace std;

// Base class: Person
class Person {
public:
    Person() {
        cout << "Person's constructor called" << endl;
    }
};

// Derived class 1: Faculty
class Faculty : public Person {
public:
    Faculty() {
        cout << "Faculty's constructor called" << endl;
    }
};

// Derived class 2: Student
class Student : public Person {
public:
    Student() {
        cout << "Student's constructor called" << endl;
    }
};

// Derived class 3: TA (inherits from both Faculty and Student)
class TA : public Faculty, public Student {
public:
    TA() {
        cout << "TA's constructor called" << endl;
    }
};

int main() {
    
    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    // Creating an object of TA
    TA ta;

    return 0;
}

