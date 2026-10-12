#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length, breadth;

    public:
        void accept() {  // Defined inside class
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
        }

        float area();       // Defined outside class
        float perimeter();  // Defined outside class
        void display();
};

float Rectangle::area() {
    return length * breadth;
}

float Rectangle::perimeter() {
    return 2 * (length + breadth);
}

void Rectangle::display() {
    cout << "Area = " << area() << endl;
    cout << "Perimeter = " << perimeter() << endl;
}

int main() {
    Rectangle r;
    r.accept();
    r.display();

    return 0;
}