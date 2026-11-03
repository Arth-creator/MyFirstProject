#include <iostream>
using namespace std;

double calculateSquareArea(double side) {
    return side * side;
}
double calculateRectangleArea(double length, double width) {
    return length * width;
}
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice = 0;

    do{
        cout << "n\please select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit Program\n";
        cout << "1. Enter selection: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "\nYour input was invalid. please enter a valid number.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                double side;
                cout << "Enter the length of the square side: ";
                cin >> side;
                cout << "The area of the square is: " << calculateSquareArea(side) << "\n";
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "The are of the rectangle is: " << calculateRectangleArea(length, width) << "\n";
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << "\n";
            }
            case 4:
                 cout << "Quitting program. Goodbye!\n";
                 break;
            dafault:
                 cout << "n\Your input was: " << choice << "Which is an invalid input\n";
                 cout << "Please enter a valid input!!!\n";
                 break;     
        }
         
    }
    while (choice != 4);
    return 0;
}