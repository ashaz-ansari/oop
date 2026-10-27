#include <iostream.h>
#include <conio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        cout << "Enter roll number, name and marks of student "
             << i + 1 << ": ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    cout << "\n--- Student Details ---" << endl;
    for (i = 0; i < 3; i++) {
        cout << "Roll No: " << s[i].roll
             << ", Name: " << s[i].name
             << ", Marks: " << s[i].marks << endl;
    }

    getch();
    return 0;
}
