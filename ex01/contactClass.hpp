#ifndef CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include <string>
#include <iostream>

class Contact {
public:
    Contact();
    ~Contact();

    void setFirstName(const std::string& name);
    void setLastName(const std::string& name);
    void setNickname(const std::string& name);
    void setPhoneNumber(const std::string& number);
    void setDarkestSecret(const std::string& secret);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    std::string truncate(const std::string& str) const;  // Asegúrate de que esta línea esté aquí
    void clear();  // Asegúrate de que esta línea esté aquí
    void display() const;  // Asegúrate de que esta línea esté aquí

private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};

#endif