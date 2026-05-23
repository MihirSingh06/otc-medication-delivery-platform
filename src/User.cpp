#include "../include/User.h"

User::User() {}

User::User(int id, string name, string email, string password) {
    this->id = id;
    this->name = name;
    this->email = email;
    this->password = password;
}

void User::setName(string name) {
    this->name = name;
}

string User::getName() {
    return name;
}

void User::setEmail(string email) {
    this->email = email;
}

string User::getEmail() {
    return email;
}
