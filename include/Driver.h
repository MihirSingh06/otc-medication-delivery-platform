#ifndef DRIVER_H
#define DRIVER_H

#include "User.h"

class Driver : public User {
private:
    bool available;

public:
    Driver();

    void setAvailability(bool available);
    bool isAvailable();

    void displayMenu() override;
};

#endif
