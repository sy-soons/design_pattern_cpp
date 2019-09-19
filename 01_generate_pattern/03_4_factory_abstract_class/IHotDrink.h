#ifndef __IHOTDRINK_H__
#define __IHOTDRINK_H__

class IHotDrink
{
    public:
        virtual void prepare(int volume) = 0;
        IHotDrink();
};

#endif