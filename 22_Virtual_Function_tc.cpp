#include <iostream.h>
#include <conio.h>

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape *s;
    Circle c;
    Rectangle r;

    s = &c;
    s->draw();

    s = &r;
    s->draw();

    getch();
    return 0;
}
