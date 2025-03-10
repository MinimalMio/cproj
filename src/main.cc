#include <iostream>
#include "cfgparser.h"

int main(int argc, char* argv[]) {
    new_config_file("config.ini");
    new_config_item("config.ini", "name", "Alice");
    new_config_item("config.ini", "age", "25");
    del_config_item("config.ini", "age");
    std::cout << get_config_item("config.ini", "name") << std::endl;
    return 0;
}