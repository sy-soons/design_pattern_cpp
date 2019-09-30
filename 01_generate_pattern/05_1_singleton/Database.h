#ifndef __DATABASE_H__
#define __DATABASE_H__

#include <string>

class Database
{
    public:
        static Database& get();
        virtual int get_population(const std::string& name){};

    protected:
        Database();
};

#endif