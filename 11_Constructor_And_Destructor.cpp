#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor: Object is created." << endl;
    }

    ~Demo() {
        cout << "Destructor: Object is destroyed." << endl;
    }

    void show() {
        cout << "Inside show() function." << endl;
    }
};

int main() {
    cout << "--- Start of main() ---" << endl;

    {
        Demo d;
        d.show();
    }

    cout << "--- End of main() ---" << endl;

    return 0;
}
