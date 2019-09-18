#include "IHotDrink.h"

class Coffee : public IHotDrink
{
    public:
        void prepare(int volume) override;
};