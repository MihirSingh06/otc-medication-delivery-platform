#ifndef PROVIDER_H
#define PROVIDER_H

#include "User.h"

class Provider : public User {
private:
    string licenseNumber;
    bool verified;

public:
    Provider();

    void setLicenseNumber(string licenseNumber);
    string getLicenseNumber();

    void setVerified(bool verified);
    bool isVerified();

    void displayMenu() override;
};

#endif
