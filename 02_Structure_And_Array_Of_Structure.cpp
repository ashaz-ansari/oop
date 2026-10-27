#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter roll number, name and marks of student "
             << i + 1 << ": ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    cout << "\n--- Student Details ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Roll No: " << s[i].roll
             << ", Name: " << s[i].name
             << ", Marks: " << s[i].marks << endl;
    }

    return 0;
}
