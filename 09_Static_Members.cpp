#include <iostream>
using namespace std;

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

    return 0;
}
