#include <stdio.h>
#include "Coffee.h"

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

Coffee::Coffee()
{
    
}

void Coffee::prepare(int volume)
{
    printf("Take coffee, boil water, pour %d ml, and some sugar\n", volume);
}

std::unique_ptr<IHotDrink> Coffee::clone()
{
    return make_unique<Coffee>();
}