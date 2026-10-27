#include <iostream.h>
#include <conio.h>

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    cerr << "This is an error message." << endl;
    clog << "This is a log message." << endl;
    getch();
    return 0;
}
