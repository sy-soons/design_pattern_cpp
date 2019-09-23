#ifndef __COFFEE_H__
#define __COFFEE_H__

#include "IHotDrink.h"
#include <memory>

class Coffee : public IHotDrink
{
    public:
        void prepare(int volume) override;
        Coffee();
        Coffee(Coffee& rhs) : IHotDrink(rhs) {}
        std::unique_ptr<IHotDrink> clone();
};

#endif
