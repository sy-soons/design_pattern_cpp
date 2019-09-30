#include "DummyDatabase.h"

DummyDatabase::DummyDatabase()
{
    names.push_back("apple");
    names.push_back("banana");

    int population = 0;
    for (auto it = names.begin(); it != names.end(); ++it)
    {
        capitals[*it] = ++population;
    }
}

int DummyDatabase::get_population(const std::string& name)
{
    return capitals[name];
}

std::vector<std::string>& DummyDatabase::get_names()
{
    std::vector<std::string>& vNames = names;
    // return names;
    return vNames;
}
