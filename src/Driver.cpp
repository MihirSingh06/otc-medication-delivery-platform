#include "../include/Driver.h"
#include <iostream>

using namespace std;

Driver::Driver() {
    available = true;
}

void Driver::setAvailability(bool available) {
    this->available = available;
}

bool Driver::isAvailable() {
    return available;
}

void Driver::displayMenu() {
    cout << "Driver Menu" << endl;
    cout << "1. View Available Deliveries" << endl;
    cout << "2. Accept Delivery" << endl;
    cout << "3. Update Delivery Status" << endl;
}
