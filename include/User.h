#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User {
protected:
    int id;
    string name;
    string email;
    string password;

public:
    User();

    User(int id, string name, string email, string password);

    void setName(string name);
    string getName();

    void setEmail(string email);
    string getEmail();

    virtual void displayMenu() = 0;
};

#endif
