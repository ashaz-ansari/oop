#include <iostream.h>
#include <conio.h>

class Counter {
private:
    static int count;
public:
    void increment() {
        count++;
    }

    static void showCount() {
        cout << "Count = " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter a, b, c;

    a.increment();
    b.increment();
    c.increment();

    Counter::showCount();

    getch();
    return 0;
}
