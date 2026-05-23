#include "../include/Admin.h"
#include <iostream>

using namespace std;

Admin::Admin() {}

void Admin::verifyProvider() {
    cout << "Provider verified." << endl;
}

void Admin::removeUser() {
    cout << "User removed from platform." << endl;
}

void Admin::displayMenu() {
    cout << "Admin Menu" << endl;
    cout << "1. Verify Providers" << endl;
    cout << "2. Remove Users" << endl;
    cout << "3. View Platform Reports" << endl;
}
