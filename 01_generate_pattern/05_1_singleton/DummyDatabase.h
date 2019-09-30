#ifndef __DUMMYDATABASE_H__
#define __DUMMYDATABASE_H__
#include "Database.h"

#include <map>
#include <vector>
#include <string>

class DummyDatabase : public Database
{
    public:
    DummyDatabase();
    int get_population(const std::string& name) override;
    std::vector<std::string>& get_names();

    private:
    std::map<std::string, int> capitals;
    std::vector<std::string> names;
};

#endif