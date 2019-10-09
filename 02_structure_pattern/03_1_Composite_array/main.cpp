#include "Creature.h"
#include <iostream>

int main()
{
    Creature creature;

    creature.set_strength(99);
    creature.set_agility(100);
    creature.set_intelligence(150);

    std::cout << "max       : " << creature.max() << std::endl;
    std::cout << "sum       : " << creature.sum() << std::endl;
    std::cout << "average   : " << creature.average() << std::endl;
    
    return 0;
}