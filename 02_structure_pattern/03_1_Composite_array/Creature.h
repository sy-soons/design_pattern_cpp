#ifndef __CREATURE_H__
#define __CREATURE_H__

#include <map>

class Creature{
public:
    Creature();
    int get_strength() const;
    void set_strength(int strength);
    int get_agility() const;
    void set_agility(int agility);
    int get_intelligence() const;
    void set_intelligence(int intelligence);
    int sum() const;
    int max() const;
    double average() const;

private:
    enum Abilities {eSTRENGTH, eAGILITY, eINTELLIGENCE, eMAX_ABLITY_COUNT};
    std::map<int, int> abilities;//ability, value
};

#endif
