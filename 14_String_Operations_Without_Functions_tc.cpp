#include <iostream.h>
#include <conio.h>

int main() {
    char str1[100], str2[100], concat[200], rev[100], ch;
    int i, len1, len2, n, cmp, pos;

    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    len1 = 0;
    while (str1[len1] != '\0')
        len1++;

    len2 = 0;
    while (str2[len2] != '\0')
        len2++;

    for (i = 0; i < len1; i++)
        concat[i] = str1[i];
    for (i = 0; i < len2; i++)
        concat[len1 + i] = str2[i];
    concat[len1 + len2] = '\0';
    cout << "a) Concatenation: " << concat << endl;

    n = (len1 < len2) ? len1 : len2;
    cmp = 0;
    for (i = 0; i < n; i++) {
        if (str1[i] < str2[i]) {
            cmp = -1;
            break;
        }
        else if (str1[i] > str2[i]) {
            cmp = 1;
            break;
        }
    }
    if (cmp == 0 && len1 != len2) {
        cmp = (len1 < len2) ? -1 : 1;
    }

    if (cmp == 0)
        cout << "b) Both strings are equal." << endl;
    else if (cmp < 0)
        cout << "b) First string is less than second string." << endl;
    else
        cout << "b) First string is greater than second string." << endl;

    cout << "Enter a character to search in first string: ";
    cin >> ch;
    pos = -1;
    for (i = 0; i < len1; i++) {
        if (str1[i] == ch) {
            pos = i;
            break;
        }
    }
    if (pos != -1)
        cout << "c) Character '" << ch << "' found at position: " << pos << endl;
    else
        cout << "c) Character '" << ch << "' not found." << endl;

    for (i = 0; i < len1; i++)
        rev[i] = str1[len1 - 1 - i];
    rev[len1] = '\0';
    cout << "d) Reverse of first string: " << rev << endl;

    getch();
    return 0;
}
