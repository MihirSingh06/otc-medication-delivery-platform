#include <iostream>

#include "../include/Customer.h"
#include "../include/Provider.h"
#include "../include/Driver.h"
#include "../include/Admin.h"

using namespace std;

int main() {

    int choice;

    cout << "===================================" << endl;
    cout << " OTC Medication Delivery Platform " << endl;
    cout << "===================================" << endl;

    cout << endl;
    cout << "Select User Role:" << endl;
    cout << "1. Customer" << endl;
    cout << "2. Provider" << endl;
    cout << "3. Driver" << endl;
    cout << "4. Admin" << endl;

    cout << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << endl;

    switch(choice) {

        case 1: {
            Customer customer;
            customer.displayMenu();
            break;
        }

        case 2: {
            Provider provider;
            provider.displayMenu();
            break;
        }

        case 3: {
            Driver driver;
            driver.displayMenu();
            break;
        }

        case 4: {
            Admin admin;
            admin.displayMenu();
            break;
        }

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
