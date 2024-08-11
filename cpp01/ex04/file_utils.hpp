#ifndef FILE_UTILS_HPP
#define FILE_UTILS_HPP

#include <string>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <sys/stat.h>

namespace file_utils {

std::string readFile(const std::string& filename);

void writeFile(const std::string& filename, const std::string& content);

}

#endif
