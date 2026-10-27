#include <iostream.h>
#include <fstream.h>
#include <string.h>
#include <conio.h>

class FileError {
    char msg[100];
public:
    FileError(const char *m) {
        strcpy(msg, m);
    }

    const char *what() {
        return msg;
    }
};

int main() {
    char line[200];
    int a, b;

    try {
        ofstream fout("student.txt");

        if (!fout) {
            throw FileError("File could not be created");
        }

        fout << "Welcome to GPP." << endl;
        fout << "This is file handling example." << endl;
        fout.close();

        cout << "Data written to file successfully." << endl;

        ofstream app("student.txt", ios::app);
        app << "This line is appended at the end." << endl;
        app.close();

        ifstream fin("student.txt");

        if (!fin) {
            throw FileError("File not found");
        }

        cout << "Reading from file:" << endl;
        while (fin.getline(line, 200)) {
            cout << line << endl;
        }
        fin.close();

        a = 100;
        b = 0;
        if (b == 0) {
            throw FileError("Division by zero is not allowed");
        }
        cout << "Result = " << a / b << endl;
    }
    catch (FileError e) {
        cout << "Exception caught: " << e.what() << endl;
    }
    catch (...) {
        cout << "An unknown exception occurred." << endl;
    }

    getch();
    return 0;
}
