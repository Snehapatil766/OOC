#include <iostream>   // Include necessary header for input/output stream
#include <cmath>      // Include necessary header for mathematical functions
using namespace std;

const double PI = 3.14159; // Define constant value for PI

// Base class
class Shape {
public:
    // Pure virtual functions
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius; // Private member variable
public:
    // Constructor
    Circle(double rad) : radius(rad) {}

    // Override the virtual functions
    double calculateArea() const override {
        return PI * pow(radius, 2);
    }

    double calculatePerimeter() const override {
        return 2 * PI * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    // Constructor
    Rectangle(double len, double wid) : length(len), width(wid) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2; // Semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Heron's formula
    }

    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

// Main function
int main() {

    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    // Create instances of shapes
    Circle circle(2.0);
    Rectangle rectangle(4, 8);
    Triangle triangle(4.0, 4.0, 5);

    // Display results
    cout << "Circle:\n";
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Perimeter: " << circle.calculatePerimeter() << endl;

    cout << "\nRectangle:\n";
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    cout << "\nTriangle:\n";
    cout << "Area: " << triangle.calculateArea() << endl;
    cout << "Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}

