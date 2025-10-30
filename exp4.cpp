#include<iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor with default values (1 for both length and width)
    Rectangle() : length(1.0), width(1.0) {}

    // Constructor with custom values
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Destructor (optional, but good practice)
    ~Rectangle() {
        cout << "Rectangle object destroyed" << endl;
    }

    // Getter methods for length and width
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    // Setter methods for length and width
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    // Calculate and return the area of the rectangle
    double calculateArea() const {
        return length * width;
    }

    // Calculate and return the perimeter of the rectangle
    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // Student Information Header
    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    // Create a rectangle with custom values
    Rectangle rec(4.0, 40.0);

    // Display properties
    cout << "Rectangle Properties" << endl;
    cout << "Length      : " << rec.getLength() << endl;
    cout << "Width       : " << rec.getWidth() << endl;
    cout << "Area        : " << rec.calculateArea() << endl;
    cout << "Perimeter   : " << rec.calculatePerimeter() << endl;

    return 0;
}

