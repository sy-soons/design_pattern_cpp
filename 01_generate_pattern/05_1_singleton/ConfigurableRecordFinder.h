#ifndef __CONFIGURABLERECORDFINDER_H__
#define __CONFIGURABLERECORDFINDER_H__

#include "Database.h"
#include <string>
#include <vector>
// #include <map>

class ConfigurableRecordFinder
{
    public:
    explicit ConfigurableRecordFinder(Database& db);
    int total_population(std::vector<std::string>& names);
    
    private:
    Database& db;
    // std::map<std::string, int> capitals;
};

#endif