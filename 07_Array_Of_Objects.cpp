#include <iostream>
using namespace std;

class Item {
private:
    int code;
public:
    void getData() {
        cout << "Enter item code: ";
        cin >> code;
    }

    void showData() {
        cout << "Item code: " << code << endl;
    }
};

int main() {
    Item items[3];

    for (int i = 0; i < 3; i++) {
        items[i].getData();
    }

    cout << "\n--- Item Details ---" << endl;
    for (int i = 0; i < 3; i++) {
        items[i].showData();
    }

    return 0;
}
