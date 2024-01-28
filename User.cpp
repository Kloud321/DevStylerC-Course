//
// Created by damya on 23.1.2024 г..
//

#include "User.h"

User::User(string username, string password) : username(username)  {
    setPassword(password);
}

void User::setUsername(string username) {
    User::username = username;
}

string User::getUsername()  {
    return username;
}

void User::setPassword(string password) {
    if (password.length() >= 4 && password.length() <= 20){
        this->password = password;
    }

    while (!(password.length() >= 4 && password.length() <= 20)) {
        cout << "Enter a password between 4 and 20 characters: ";
        cin >> password;
    }

    this->password = password;

}


string User::getPassword() {
    return password;
}

