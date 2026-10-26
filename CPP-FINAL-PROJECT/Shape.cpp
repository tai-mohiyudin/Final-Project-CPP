#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;      // pure virtual
    virtual void draw() = 0;       // pure virtual

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }

    void draw() {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }

    void draw() {
        cout << "Drawing a Rectangle of " << length << " x " << breadth << endl;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Circle(3.5);

    cout << "\n----- Demonstrating Polymorphism -----\n";
    for(int i = 0; i < 3; i++) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << "------------------------" << endl;
    }

    // free memory
    for(int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}