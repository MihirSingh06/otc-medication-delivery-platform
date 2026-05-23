#ifndef INVENTORYSERVICE_H
#define INVENTORYSERVICE_H

#include <vector>
#include "Medication.h"

using namespace std;

class InventoryService {
private:
    vector<Medication> medications;

public:
    void addMedication(Medication medication);

    void displayInventory();
};

#endif