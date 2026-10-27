#include <iostream.h>
#include <conio.h>

class Distance {
    int meters;
public:
    Distance(int m = 0) {
        meters = m;
    }

    operator int() {
        return meters;
    }

    Distance(double km) {
        meters = km * 1000;
    }

    void display() {
        cout << "Distance = " << meters << " meters" << endl;
    }
};

int main() {
    Distance d1 = 2.5;
    d1.display();

    int m = d1;
    cout << "Distance in meters (basic type) = " << m << endl;

    getch();
    return 0;
}
