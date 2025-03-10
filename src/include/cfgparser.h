#ifndef CFG_PARSER
#define CFG_PARSER

#include <string>

void new_config_file(const char* filename);

void new_config_item(const char* filename, const char* key, const char* value);

void del_config_item(const char* filename, const char* key);

std::string get_config_item(const char* filename, const char* key);

#endif 