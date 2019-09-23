#include <stdio.h>
#include "Tea.h"

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

Tea::Tea()
{
    
}

void Tea::prepare(int volume)
{
    printf("Take tea bag, boil water, pour %d ml, and some lemon\n", volume);
}

std::unique_ptr<IHotDrink> Tea::clone()
{
    return make_unique<Tea>();
}