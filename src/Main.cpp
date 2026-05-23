#include <iostream>

#include "../include/Customer.h"
#include "../include/Provider.h"
#include "../include/Driver.h"
#include "../include/Admin.h"
#include "../include/AuthenticationService.h"

using namespace std;

int main() {

    AuthenticationService authService;

    Customer customer;
    Provider provider;
    Driver driver;
    Admin admin;

    authService.registerCustomer(customer);
    authService.registerProvider(provider);
    authService.registerDriver(driver);
    authService.registerAdmin(admin);

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

        case 1:
            customer.displayMenu();
            break;

        case 2:
            provider.displayMenu();
            break;

        case 3:
            driver.displayMenu();
            break;

        case 4:
            admin.displayMenu();
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    authService.showSystemUsers();

    return 0;
}