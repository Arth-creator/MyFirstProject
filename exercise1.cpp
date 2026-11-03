#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int daysUntilExipiration = rand() % 12;

    cout << "Days until expiration: " <<daysUntilExipiration << "\n\n";

    if (daysUntilExipiration <= 0) {
        cout << "Your subscription has expired.\n";

    } else if (daysUntilExipiration == 1) {
        cout << "yours subscription expires within a day!\n";
        cout << "Renew now and save 20%!\n";

    } else if (daysUntilExipiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExipiration << "days.\n";
        cout << "Renew now and save 10%!\n";

    } else if (daysUntilExipiration <= 10) {
        cout << "Your subscription will expire soon. Renw now!\n";
    } else {
        cout << "You have an active subscription.\n";
    }

    return 0;
}