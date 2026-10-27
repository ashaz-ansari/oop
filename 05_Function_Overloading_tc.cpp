#include <iostream.h>
#include <conio.h>

void print(int x) {
    cout << "Integer: " << x << "\n";
}

void print(float y) {
    cout << "Float: " << y << "\n";
}

void print(char ch) {
    cout << "Character: " << ch << "\n";
}

int main() {
    print(100);
    print(98.6f);
    print('A');
    getch();
    return 0;
}
