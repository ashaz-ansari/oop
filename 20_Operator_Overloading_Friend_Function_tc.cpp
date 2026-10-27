#include <iostream.h>
#include <conio.h>

class Number {
    int x;
public:
    Number(int a) {
        x = a;
    }

    friend Number operator-(Number n);
    friend Number operator+(Number n1, Number n2);

    void display() {
        cout << "Value: " << x << endl;
    }
};

Number operator-(Number n) {
    return Number(-n.x);
}

Number operator+(Number n1, Number n2) {
    return Number(n1.x + n2.x);
}

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
