#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    cout << "Days until expiration: " << daysUntilExpiration << "\n\n";

    switch (daysUntilExpiration) {
        case 0:
           cout << "Your subscription has expired.\n";
           break;
        case 1:
           cout << "Your subscriptio expires within a day!\n";
           cout << "Renew now and save 20%!\n";
        break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days.\n";
            cout << "Renew now and 10%\n";
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!\n";
            break;
            
        default:
            cout << "You have an active subscription.\n";
            break;    
    }
    return 0;
}