#include "Creature.h"
#include <algorithm>
#include <map>

using namespace std;

Creature::Creature()
{
    for(int i = 0; i < eMAX_ABLITY_COUNT; i++)
        abilities[i] = 0;
}

/*
const 함수의 경우, []연산자 오버로딩 함수보다는 at()메서드를 사용해야한다.
*/
int Creature::get_strength() const
{
    return abilities.at(eSTRENGTH);
}

void Creature::set_strength(int strength)
{
    abilities[eSTRENGTH] = strength;
}

int Creature::get_agility() const
{
    return abilities.at(eAGILITY);
}


void Creature::set_agility(int agility)
{
    abilities[eAGILITY] = agility;
}

int Creature::get_intelligence() const
{
    return abilities.at(eINTELLIGENCE);
}

void Creature::set_intelligence(int intelligence)
{
    abilities[eINTELLIGENCE] = intelligence;
}

int Creature::sum() const
{
    int total = 0;
    for(int i = 0; i < eMAX_ABLITY_COUNT; i++)
        total += abilities.at(i);
    return total;
}

int Creature::max() const
{
    int max_num = 0;
    for(int i = 0; i < eMAX_ABLITY_COUNT; i++)
    {
        if(abilities.at(i) > max_num)
            max_num = abilities.at(i);
    }
    return max_num;
}

double Creature::average() const
{
    return sum() / (double) eMAX_ABLITY_COUNT;
}
