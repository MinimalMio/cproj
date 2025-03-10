#include "cfgparser.h"
#include <string>
#include <fstream>

void new_config_file(const char* filename) {
    std::ofstream file(filename);
    file.close();
}

void new_config_item(const char* filename, const char* key, const char* value) {
    std::ofstream file(filename, std::ios_base::app);
    file << key << "=" << value << std::endl;
    file.close();
}

void del_config_item(const char* filename, const char* key) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        if (line.find(key) == std::string::npos) {
            std::ofstream newfile(filename, std::ios_base::trunc);
            newfile << line << std::endl;
            newfile.close();
        }
    }
    file.close();
}

std::string get_config_item(const char* filename, const char* key) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        if (line.find(key) == 0) {
            std::string value = line.substr(line.find("=") + 1);
            file.close();
            return value;
        }
    }
}