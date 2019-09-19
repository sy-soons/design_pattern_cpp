#include "HotDrinkFactory.h"
#include "Coffee.h"
#include "Tea.h"
#include <stdio.h>
#include <map>

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

std::unique_ptr<IHotDrink> HotDrinkFactory::make_drink(std::string type)
{
    std::unique_ptr<IHotDrink> drink;
    if(type == "tea")
    {
        drink = make_unique<Tea>();
        drink->prepare(200);
    }
    else if(type == "coffee")
    {
        drink = make_unique<Coffee>();
        drink->prepare(50);
    }
    else
    {
        printf("invalid type: %s\n", type.c_str());
    }
    
    return drink;
}