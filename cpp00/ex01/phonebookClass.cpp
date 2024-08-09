#include "phonebookClass.hpp"
#include <iostream>

Phonebook::Phonebook() : _currentIndex(0) {
    std::cout << "Phonebook initialized" << std::endl;
    for (int i = 0; i < 8; ++i) {
        _contacts[i].clear();
    }
}

Phonebook::~Phonebook() {
    std::cout << "Phonebook destroyed" << std::endl;
}

void Phonebook::displayBanner() const {
    std::cout << " _________________________________ " << std::endl
              << "|     Phonebook:                   |" << std::endl
              << "| 1. ADD   2. SEARCH   3. EXIT    |" << std::endl
              << "|_________________________________|" << std::endl;
}

std::string Phonebook::getInput(const std::string& prompt) const {
    std::cout << std::endl << prompt << std::endl;
    std::string input;
    if (!std::getline(std::cin, input)) {
        if (std::cin.eof()) {
            std::cout << "Input stream closed. Exiting..." << std::endl;
            exit(0);
        } else {
            std::cerr << "Error reading input." << std::endl;
            std::exit(EXIT_FAILURE);
        }
    }
    return input.empty() ? getInput(prompt) : input;
}

bool Phonebook::isValidPhoneNumber(const std::string& phoneNumber) const {
    if (phoneNumber.empty()) {
        return false;

    if (phoneNumber[0] == '+') {
        for (size_t i = 1; i < phoneNumber.size(); ++i) {
            if (!isdigit(phoneNumber[i])) {
                return false;
            }
        }
        return true;
    }

    for (size_t i = 0; i < phoneNumber.size(); ++i) {
        if (!isdigit(phoneNumber[i])) {
            return false;
        }
    }
    return true;
}

int Phonebook::addContact(int index) {
    _contacts[index].setFirstName(getInput("First Name: "));
    _contacts[index].setLastName(getInput("Last Name: "));
    _contacts[index].setNickname(getInput("Nickname: "));
    
    std::string phoneNumber;
    bool validPhoneNumber = false;

    while (!validPhoneNumber) {
        phoneNumber = getInput("Phone Number: ");
        validPhoneNumber = isValidPhoneNumber(phoneNumber);

        if (!validPhoneNumber) {
            std::cout << "Invalid phone number. Please enter a valid phone number." << std::endl;
        }
    }
    
    _contacts[index].setPhoneNumber(phoneNumber);
    _contacts[index].setDarkestSecret(getInput("Darkest Secret: "));
    std::system("clear");
    return (index + 1) % 8;
}

void Phonebook::displayContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < 8; ++i) {
        if (_contacts[i].getFirstName().empty()) {
            break;
        }
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << _contacts[i].truncate(_contacts[i].getFirstName()) << "|"
                  << std::setw(10) << _contacts[i].truncate(_contacts[i].getLastName()) << "|"
                  << std::setw(10) << _contacts[i].truncate(_contacts[i].getNickname()) << "|" << std::endl;
    }
}

void Phonebook::processOption(const std::string& option) {
    if (option == "ADD" || option == "add" || option == "1") {
        if (_currentIndex == 8) {
            _currentIndex = 0;
        }
        _currentIndex = addContact(_currentIndex);
    } else if (option == "SEARCH" || option == "search" || option == "2") {
        displayContacts();
        int index = std::atoi(getInput("Contact index: ").c_str());
        if (index < 0 || index >= 8) {
            std::cout << "Invalid index" << std::endl;
        } else {
            _contacts[index].display();
        }
    } else if (option == "EXIT" || option == "exit" || option == "3") {
        exit(0);
    }
}

void Phonebook::run() {
    std::string option;
    displayBanner();
    while (true) {
        std::getline(std::cin, option);
        processOption(option);
        displayBanner();
    }
}
