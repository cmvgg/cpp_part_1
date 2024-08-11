#include "file_utils.hpp"

namespace file_utils {

std::string readFile(const std::string& filename) {

    std::ifstream file(filename.c_str(), std::ios::in | std::ios::binary);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file for reading: " + filename);
    }

    std::string content;
    file.seekg(0, std::ios::end);
    content.reserve(file.tellg());
    file.seekg(0, std::ios::beg);

    content.assign((std::istreambuf_iterator<char>(file)),
                   std::istreambuf_iterator<char>());

    if (file.fail()) {
        throw std::runtime_error("Error reading file: " + filename);
    }

    return content;
}

void writeFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename.c_str(), std::ios::out | std::ios::binary);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file for writing: " + filename);
    }

    file.write(content.c_str(), content.size());

    if (file.fail()) {
        throw std::runtime_error("Error writing file: " + filename);
    }
}

}