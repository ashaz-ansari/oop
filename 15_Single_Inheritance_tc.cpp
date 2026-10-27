#include <iostream.h>
#include <conio.h>

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
    getch();
    return 0;
}
