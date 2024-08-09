#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include "contactClass.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <ctime>
#include <unistd.h>

class Phonebook {
public:
    Phonebook();
    ~Phonebook();
    void run();

private:
    void displayBanner() const;
    std::string getInput(const std::string& prompt) const;
    int addContact(int index);
    void displayContacts() const;
    void processOption(const std::string& option);
    bool isValidPhoneNumber(const std::string& phoneNumber) const;

    Contact _contacts[8];
    int _currentIndex;
};

#endif