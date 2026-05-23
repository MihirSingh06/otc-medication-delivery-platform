#include "../include/InventoryService.h"
#include <iostream>

using namespace std;

void InventoryService::addMedication(Medication medication) {
    medications.push_back(medication);
}

void InventoryService::displayInventory() {

    cout << endl;
    cout << "===== MEDICATION INVENTORY =====" << endl;

    for (Medication medication : medications) {
        medication.displayMedication();
    }
}