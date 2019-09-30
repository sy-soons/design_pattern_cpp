#include "ConfigurableRecordFinder.h"
#include "DummyDatabase.h"
#include <iostream>

int main()
{
    std::cout << "===== main =====" << std::endl;
    
    DummyDatabase db;
    ConfigurableRecordFinder cf(db);
    int total_cnt = cf.total_population(db.get_names());

    std::cout << "total count: " << total_cnt << std::endl;
    return 0;
}