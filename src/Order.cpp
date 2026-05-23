#include "../include/Order.h"
#include <iostream>

using namespace std;

Order::Order() {
    status = CREATED;
}

Order::Order(int orderId) {
    this->orderId = orderId;
    status = CREATED;
}

void Order::addMedication(Medication medication) {
    medications.push_back(medication);
}

void Order::setStatus(OrderStatus status) {
    this->status = status;
}

OrderStatus Order::getStatus() {
    return status;
}

void Order::displayOrder() {

    cout << endl;
    cout << "===== ORDER DETAILS =====" << endl;
    cout << "Order ID: " << orderId << endl;

    cout << endl;
    cout << "Medications:" << endl;

    for (Medication medication : medications) {
        medication.displayMedication();
    }

    cout << endl;
    cout << "Order Status: ";

    switch(status) {

        case CREATED:
            cout << "CREATED";
            break;

        case APPROVED:
            cout << "APPROVED";
            break;

        case ASSIGNED_DRIVER:
            cout << "ASSIGNED_DRIVER";
            break;

        case PICKED_UP:
            cout << "PICKED_UP";
            break;

        case DELIVERED:
            cout << "DELIVERED";
            break;
    }

    cout << endl;
}