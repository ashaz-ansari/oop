#include <iostream.h>
#include <conio.h>

class Number {
    int x;
public:
    Number(int a) {
        x = a;
    }

    Number operator-() {
        return Number(-x);
    }

    Number operator+(Number n) {
        return Number(x + n.x);
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n1(10);
    Number n2 = -n1;
    n1.display();
    n2.display();

    Number n3(10), n4(20);
    Number n5 = n3 + n4;
    cout << "After Addition: ";
    n5.display();

    getch();
    return 0;
}
