#include "file_utils.hpp"
#include "string_utils.hpp"


std::string createOutputFilename(const std::string& inputFilename) {
    return inputFilename + ".replace";
}

int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <find> <replace>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string findStr = argv[2];
    std::string replaceStr = argv[3];

    std::string outputFilename = createOutputFilename(filename);

    std::ifstream file(filename.c_str());
    if (!file) {
        std::cerr << "Error: File does not exist or could not be opened: " << filename << std::endl;
        return 1;
    }
    file.close();

    try {
        std::string content = file_utils::readFile(filename);


        std::string modifiedContent = string_utils::replaceAll(content, findStr, replaceStr);

        file_utils::writeFile(outputFilename, modifiedContent);

        std::cout << "Replacement complete. Modified content written to: " << outputFilename << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
