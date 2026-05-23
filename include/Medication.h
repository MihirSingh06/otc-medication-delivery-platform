#ifndef MEDICATION_H
#define MEDICATION_H

#include <string>

using namespace std;

class Medication {
private:
    int medicationId;
    string name;
    double price;
    int quantity;

public:
    Medication();

    Medication(int medicationId, string name, double price, int quantity);

    void setMedicationId(int medicationId);
    int getMedicationId();

    void setName(string name);
    string getName();

    void setPrice(double price);
    double getPrice();

    void setQuantity(int quantity);
    int getQuantity();

    void displayMedication();
};

#endif