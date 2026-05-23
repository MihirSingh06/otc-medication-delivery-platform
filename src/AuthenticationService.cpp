#include "../include/AuthenticationService.h"
#include <iostream>

using namespace std;

void AuthenticationService::registerCustomer(Customer customer) {
    customers.push_back(customer);
}

void AuthenticationService::registerProvider(Provider provider) {
    providers.push_back(provider);
}

void AuthenticationService::registerDriver(Driver driver) {
    drivers.push_back(driver);
}

void AuthenticationService::registerAdmin(Admin admin) {
    admins.push_back(admin);
}

void AuthenticationService::showSystemUsers() {

    cout << endl;
    cout << "===== SYSTEM USERS =====" << endl;

    cout << "Customers: " << customers.size() << endl;
    cout << "Providers: " << providers.size() << endl;
    cout << "Drivers: " << drivers.size() << endl;
    cout << "Admins: " << admins.size() << endl;
}