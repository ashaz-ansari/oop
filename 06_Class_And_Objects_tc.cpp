#include <iostream.h>
#include <conio.h>

class Student {
private:
    int rollNo;
    float marks;
public:
    void input();
    void display();
};

void Student::input() {
    cout << "Enter Roll No and Marks: ";
    cin >> rollNo >> marks;
}

void Student::display() {
    cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
}

int main() {
    Student s1, s2;

    cout << "--- Enter details for Student 1 ---" << endl;
    s1.input();

    cout << "--- Enter details for Student 2 ---" << endl;
    s2.input();

    cout << "\n--- Student Details ---" << endl;
    s1.display();
    s2.display();

    getch();
    return 0;
}
