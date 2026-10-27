#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int roll) {
        this->roll = roll;
    }

    void show() {
        cout << "Roll No = " << this->roll << endl;
    }
};

int main() {
    Student s1(101);
    Student* ptr = &s1;
    ptr->show();

    Student s2(202);
    s2.show();

    return 0;
}
