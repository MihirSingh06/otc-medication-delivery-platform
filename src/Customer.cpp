#include "../include/Customer.h"
#include <iostream>

using namespace std;

Customer::Customer() {}

void Customer::displayMenu() {
    cout << "Customer Menu" << endl;
    cout << "1. Browse Medication" << endl;
    cout << "2. Place Order" << endl;
    cout << "3. View Orders" << endl;
}
