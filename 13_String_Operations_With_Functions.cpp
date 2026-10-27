#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    char ch;

    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    string result = str1 + " " + str2;
    cout << "a) Concatenation: " << result << endl;

    int cmp = str1.compare(str2);
    if (cmp == 0)
        cout << "b) Both strings are equal." << endl;
    else if (cmp < 0)
        cout << "b) " << str1 << " is less than " << str2 << endl;
    else
        cout << "b) " << str1 << " is greater than " << str2 << endl;

    cout << "Enter a character to search in first string: ";
    cin >> ch;
    size_t pos = str1.find(ch);
    if (pos != string::npos)
        cout << "c) Character '" << ch << "' found at position: " << pos << endl;
    else
        cout << "c) Character '" << ch << "' not found." << endl;

    reverse(str1.begin(), str1.end());
    cout << "d) Reverse of first string: " << str1 << endl;

    return 0;
}
