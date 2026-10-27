#include <iostream.h>
#include <conio.h>

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
    int i;

    for (i = 0; i < 3; i++) {
        items[i].getData();
    }

    cout << "\n--- Item Details ---" << endl;
    for (i = 0; i < 3; i++) {
        items[i].showData();
    }

    getch();
    return 0;
}
