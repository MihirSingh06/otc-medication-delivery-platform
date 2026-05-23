#ifndef ORDERSERVICE_H
#define ORDERSERVICE_H

#include <vector>
#include "Order.h"

using namespace std;

class OrderService {
private:
    vector<Order> orders;

public:
    void createOrder(Order order);

    void displayOrders();
};

#endif