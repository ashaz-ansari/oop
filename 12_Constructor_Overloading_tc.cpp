#include <iostream.h>
#include <conio.h>

class Number {
private:
    int value;
public:
    Number() {
        value = 0;
    }

    Number(int v) {
        value = v;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1;
    Number n2(50);

    n1.display();
    n2.display();

    getch();
    return 0;
}
