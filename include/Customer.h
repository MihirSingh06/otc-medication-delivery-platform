#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"

class Customer : public User {
public:
    Customer();

    void displayMenu() override;
};

#endif
