#ifndef FILE_UTILS_HPP
#define FILE_UTILS_HPP

#include <string>
#include <fstream>
#include <stdexcept>
#include <iostream>

class FileUtils {
public:
    static std::string readFile(const std::string& filename);
    static void writeFile(const std::string& filename, const std::string& content);
};

#endif
