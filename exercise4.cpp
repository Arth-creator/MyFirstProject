#include <iostream>
using namespace std;

int main(){
    int inputVal = 0;

    cout << "Enter an integer value bettwen 5 and 10\n";

    while (!(cin >> inputVal) || inputVal < 5 || inputVal > 10) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Sorry, you have entered an invalid number , please try again\n";

        } else {
            cout << "You entered " << inputVal << ". Please enter a number bettwen 5 and 10.\n";
        }
    }
    cout << "Your input value (" << inputVal << ") has been accepted.\n";
    return 0;
}