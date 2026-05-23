#include "../include/OrderService.h"
#include <iostream>

using namespace std;

void OrderService::createOrder(Order order) {
    orders.push_back(order);
}

void OrderService::displayOrders() {

    cout << endl;
    cout << "===== ALL ORDERS =====" << endl;

    for (Order order : orders) {
        order.displayOrder();
    }
}