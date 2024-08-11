#include <iostream>

int main() {
    std::string string = "HIS THIS IS BRAIN";
    
    std::string* stringPtr = &string;
    std::string& stringRef = string;
    
    std::cout << "Address of string    -> " << &string << std::endl;
    std::cout << "Address of stringPtr -> " << &stringPtr << std::endl;
    std::cout << "Address of stringRef -> " << &stringRef << std::endl;
    std::cout << std::endl;
    
    std::cout << "Content of string    -> " << string << std::endl;
    std::cout << "Content of stringPtr -> " << *stringPtr << std::endl;
    std::cout << "Content of stringRef -> " << stringRef << std::endl;
    
    return 0;
}
