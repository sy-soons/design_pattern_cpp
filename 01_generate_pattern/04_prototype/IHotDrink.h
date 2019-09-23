#ifndef __IHOTDRINK_H__
#define __IHOTDRINK_H__
#include <memory>

class IHotDrink
{
    public:
        virtual void prepare(int volume) = 0;
        IHotDrink();
        virtual std::unique_ptr<IHotDrink> clone() = 0;
        IHotDrink(const IHotDrink& rhs)
        {
            *this = rhs;
        }
};

#endif