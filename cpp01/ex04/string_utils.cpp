#include "string_utils.hpp"

std::string StringUtils::replaceAll(const std::string& str, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t s1Len = s1.length();

    while (true) {
        size_t found = str.find(s1, pos);
        if (found == std::string::npos) {
            result.append(str.substr(pos));
            break;
        }
        result.append(str.substr(pos, found - pos));
        result.append(s2);
        pos = found + s1Len;
    }

    return result;
}
