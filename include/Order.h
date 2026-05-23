#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Medication.h"

using namespace std;

enum OrderStatus {
    CREATED,
    APPROVED,
    ASSIGNED_DRIVER,
    PICKED_UP,
    DELIVERED
};

class Order {
private:
    int orderId;
    vector<Medication> medications;
    OrderStatus status;

public:
    Order();

    Order(int orderId);

    void addMedication(Medication medication);

    void setStatus(OrderStatus status);
    OrderStatus getStatus();

    void displayOrder();
};

#endif