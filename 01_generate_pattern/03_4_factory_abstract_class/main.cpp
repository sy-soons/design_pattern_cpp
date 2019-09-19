#include<stdio.h>
#include "IHotDrink.h"
#include "HotDrinkFactory.h"

using namespace std;

int main()
{
	printf("===== main =====\n");
	HotDrinkFactory::make_drink("coffee");
	HotDrinkFactory::make_drink("tea");
	return 0;
}
