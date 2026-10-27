#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    char ch;

    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    string concat = str1;
    for (int i = 0; i < (int)str2.size(); i++) {
        concat += str2[i];
    }
    cout << "a) Concatenation: " << concat << endl;

    int cmp = 0;
    int n = (int)((str1.size() < str2.size()) ? str1.size() : str2.size());
    for (int i = 0; i < n; i++) {
        if (str1[i] < str2[i]) {
            cmp = -1;
            break;
        }
        else if (str1[i] > str2[i]) {
            cmp = 1;
            break;
        }
    }
    if (cmp == 0 && str1.size() != str2.size()) {
        cmp = (str1.size() < str2.size()) ? -1 : 1;
    }

    if (cmp == 0)
        cout << "b) Both strings are equal." << endl;
    else if (cmp < 0)
        cout << "b) First string is less than second string." << endl;
    else
        cout << "b) First string is greater than second string." << endl;

    cout << "Enter a character to search in first string: ";
    cin >> ch;
    int pos = -1;
    for (int i = 0; i < (int)str1.size(); i++) {
        if (str1[i] == ch) {
            pos = i;
            break;
        }
    }
    if (pos != -1)
        cout << "c) Character '" << ch << "' found at position: " << pos << endl;
    else
        cout << "c) Character '" << ch << "' not found." << endl;

    string rev = "";
    for (int i = (int)str1.size() - 1; i >= 0; i--) {
        rev += str1[i];
    }
    cout << "d) Reverse of first string: " << rev << endl;

    return 0;
}
