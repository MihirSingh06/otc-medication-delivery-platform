#ifndef AUTHENTICATIONSERVICE_H
#define AUTHENTICATIONSERVICE_H

#include <vector>
#include "Customer.h"
#include "Provider.h"
#include "Driver.h"
#include "Admin.h"

using namespace std;

class AuthenticationService {
private:
    vector<Customer> customers;
    vector<Provider> providers;
    vector<Driver> drivers;
    vector<Admin> admins;

public:
    void registerCustomer(Customer customer);
    void registerProvider(Provider provider);
    void registerDriver(Driver driver);
    void registerAdmin(Admin admin);

    void showSystemUsers();
};

#endif