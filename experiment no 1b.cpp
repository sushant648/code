#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;

        if (marks >= 40)
            cout << "\nResult: Pass";
        else
            cout << "\nResult: Fail";
    }
};

int main() {
    Student s;
    s.accept();
    s.display();

    return 0;
}