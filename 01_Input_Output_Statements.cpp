#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    cerr << "This is an error message." << endl;
    clog << "This is a log message." << endl;
    return 0;
}
