#ifndef __HOTDRINKFACTORY_H__
#define __HOTDRINKFACTORY_H__

#include <memory>
#include <string>
#include "IHotDrink.h"

class HotDrinkFactory
{
    public:
        static std::unique_ptr<IHotDrink> make_drink(std::string type);
};

#endif
