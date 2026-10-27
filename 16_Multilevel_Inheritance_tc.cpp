#include <iostream.h>
#include <conio.h>

class GrandParent {
public:
    void house() {
        cout << "Grandparent's house." << endl;
    }
};

class Parent : public GrandParent {
public:
    void car() {
        cout << "Parent's car." << endl;
    }
};

class Child : public Parent {
public:
    void bike() {
        cout << "Child's bike." << endl;
    }
};

int main() {
    Child c;
    c.house();
    c.car();
    c.bike();
    getch();
    return 0;
}
