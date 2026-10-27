#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    void setRoll(int r) {
        roll = r;
    }

    void show() {
        cout << "Roll: " << roll << endl;
    }
};

void printStudent(Student s) {
    s.show();
}

void modify(Student &s) {
    s.roll = 202;
}

int main() {
    Student s;
    s.setRoll(101);

    cout << "Passing object by value:" << endl;
    printStudent(s);

    cout << "Passing object by reference:" << endl;
    modify(s);
    s.show();

    return 0;
}
