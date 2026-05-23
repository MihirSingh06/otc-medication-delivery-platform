#include "../include/Medication.h"
#include <iostream>

using namespace std;

Medication::Medication() {}

Medication::Medication(int medicationId, string name, double price, int quantity) {
    this->medicationId = medicationId;
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

void Medication::setMedicationId(int medicationId) {
    this->medicationId = medicationId;
}

int Medication::getMedicationId() {
    return medicationId;
}

void Medication::setName(string name) {
    this->name = name;
}

string Medication::getName() {
    return name;
}

void Medication::setPrice(double price) {
    this->price = price;
}

double Medication::getPrice() {
    return price;
}

void Medication::setQuantity(int quantity) {
    this->quantity = quantity;
}

int Medication::getQuantity() {
    return quantity;
}

void Medication::displayMedication() {
    cout << endl;
    cout << "Medication ID: " << medicationId << endl;
    cout << "Name: " << name << endl;
    cout << "Price: R" << price << endl;
    cout << "Quantity: " << quantity << endl;
}