#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "I am a Person." << endl;
    }
};

class Student : virtual public Person {
public:
    void showStudent() {
        cout << "I am a Student." << endl;
    }
};

class Employee : virtual public Person {
public:
    void showEmployee() {
        cout << "I am an Employee." << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void showWorkingStudent() {
        cout << "I am a Working Student." << endl;
    }
};

int main() {
    WorkingStudent ws;
    ws.showPerson();
    ws.showStudent();
    ws.showEmployee();
    ws.showWorkingStudent();
    return 0;
}
