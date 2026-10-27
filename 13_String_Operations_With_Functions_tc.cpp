#include <iostream.h>
#include <string.h>
#include <conio.h>

int main() {
    char str1[100], str2[100], result[200], ch;
    char *pos;
    int cmp;

    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    cout << "a) Concatenation: " << result << endl;

    cmp = strcmp(str1, str2);
    if (cmp == 0)
        cout << "b) Both strings are equal." << endl;
    else if (cmp < 0)
        cout << "b) " << str1 << " is less than " << str2 << endl;
    else
        cout << "b) " << str1 << " is greater than " << str2 << endl;

    cout << "Enter a character to search in first string: ";
    cin >> ch;
    pos = strchr(str1, ch);
    if (pos != 0)
        cout << "c) Character '" << ch << "' found at position: "
             << (int)(pos - str1) << endl;
    else
        cout << "c) Character '" << ch << "' not found." << endl;

    strrev(str1);
    cout << "d) Reverse of first string: " << str1 << endl;

    getch();
    return 0;
}
