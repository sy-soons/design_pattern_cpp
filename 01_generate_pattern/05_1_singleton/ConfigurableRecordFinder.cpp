#include "ConfigurableRecordFinder.h"

ConfigurableRecordFinder::ConfigurableRecordFinder(Database& db)
    :db(db)
{
}

int ConfigurableRecordFinder::total_population(std::vector<std::string>& names)
{
    int result = 0;
    for(auto& name: names)
        result += db.get_population(name);
    return result;
}
