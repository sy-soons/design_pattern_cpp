#ifndef __TEA_H__
#define __TEA_H__

#include "IHotDrink.h"

class Tea : public IHotDrink
{
    public:
        void prepare(int volume) override;
        Tea();
};

#endif
