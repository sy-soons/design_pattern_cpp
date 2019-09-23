#ifndef __TEA_H__
#define __TEA_H__

#include "IHotDrink.h"
#include<memory>

class Tea : public IHotDrink
{
    public:
        void prepare(int volume) override;
        Tea();
        Tea(const Tea& rhs) : IHotDrink(rhs) {}
        std::unique_ptr<IHotDrink> clone();
};

#endif
