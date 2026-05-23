#include "../include/Provider.h"
#include <iostream>

using namespace std;

Provider::Provider() {
    verified = false;
}

void Provider::setLicenseNumber(string licenseNumber) {
    this->licenseNumber = licenseNumber;
}

string Provider::getLicenseNumber() {
    return licenseNumber;
}

void Provider::setVerified(bool verified) {
    this->verified = verified;
}

bool Provider::isVerified() {
    return verified;
}

void Provider::displayMenu() {
    cout << "Provider Menu" << endl;
    cout << "1. Manage Medication" << endl;
    cout << "2. Approve Orders" << endl;
    cout << "3. View Inventory" << endl;
}
