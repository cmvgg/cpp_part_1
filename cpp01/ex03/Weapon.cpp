#include "Weapon.hpp"

Weapon::Weapon(const char* str) {
    if (str == NULL) {
        type = "";  // Asignamos una cadena vacía en caso de que el puntero sea NULL
    } else {
        type = str;  // Si no es NULL, lo usamos directamente para inicializar la cadena
    }
    std::cout << "Constructor Weapon" << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Destructor Weapon" << std::endl;
}

std::string Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string& str) {
    this->type = str;
}
