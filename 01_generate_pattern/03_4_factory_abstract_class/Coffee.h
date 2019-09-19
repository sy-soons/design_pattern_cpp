#ifndef __COFFEE_H__
#define __COFFEE_H__

#include "IHotDrink.h"

class Coffee : public IHotDrink
{
    public:
        void prepare(int volume) override;
        Coffee();
};

#endif
