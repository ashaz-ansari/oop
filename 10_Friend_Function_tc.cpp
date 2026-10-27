#include <iostream.h>
#include <conio.h>

class Student {
private:
    int marks;
public:
    Student() {
        marks = 90;
    }

    friend void show(Student s);
};

void show(Student s) {
    cout << "Marks (accessed by friend): " << s.marks << "\n";
}

int main() {
    Student s1;
    show(s1);
    getch();
    return 0;
}
