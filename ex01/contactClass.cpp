#include "contactClass.hpp"

Contact::Contact() {
    std::cout << "Contact created" << std::endl;
}

Contact::~Contact() {
    std::cout << "Contact destroyed" << std::endl;
}

void Contact::setFirstName(const std::string& firstName) {
    _firstName = firstName;
}

void Contact::setLastName(const std::string& lastName) {
    _lastName = lastName;
}

void Contact::setNickname(const std::string& nickname) {
    _nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber) {
    _phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret) {
    _darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const {
    return _firstName;
}

std::string Contact::getLastName() const {
    return _lastName;
}

std::string Contact::getNickname() const {
    return _nickname;
}

std::string Contact::getPhoneNumber() const {
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return _darkestSecret;
}

std::string Contact::truncate(const std::string& str) const {
    return (str.size() > 10) ? str.substr(0, 9) + "." : str;
}

void Contact::clear() {
    _firstName.clear();
    _lastName.clear();
    _nickname.clear();
    _phoneNumber.clear();
    _darkestSecret.clear();
}

void Contact::display() const {
    if (_firstName.empty()) {
        std::cout << "No contact to show" << std::endl;
        return;
    }

    std::cout << std::endl
              << "First name: " << _firstName << std::endl
              << "Last name: " << _lastName << std::endl
              << "Nickname: " << _nickname << std::endl
              << "Phone number: " << _phoneNumber << std::endl
              << "Darkest secret: " << _darkestSecret << std::endl
              << std::endl;
}
