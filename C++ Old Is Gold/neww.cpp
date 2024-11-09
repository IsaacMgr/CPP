#include <iostream>

using namespace std;

// Forward declaration of Display class
class Display;

// Base class
class Base {
private:
    double x, y;
public:
    void get_coords() {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }
    double get_x() const {
        return x;
    }
    double get_y() const {
        return y;
    }
    friend class Display; // Friend class declaration
};

// Friend class declaration
class Display {
public:
    void show_result(Base obj) {
        cout << "Resultant vector: (" << obj.get_x() << ", " << obj.get_y() << ")" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void add_vector(Base obj1, Base obj2) {
        double x1 = obj1.get_x();
        double y1 = obj1.get_y();
        double x2 = obj2.get_x();
        double y2 = obj2.get_y();
        x = x1 + x2;
        y = y1 + y2;
    }
};

// Main function
int main() {
    Derived obj;
    Base obj1, obj2;
    obj1.get_coords();
    obj2.get_coords();
    obj.add_vector(obj1, obj2);
    Display d;
    d.show_result(obj);
    return 0;
}
