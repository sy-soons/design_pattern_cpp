#include<stdio.h>
#include "IHotDrink.h"
#include "HotDrinkFactory.h"
#include <vector>

using namespace std;

int main()
{
	printf("===== main =====\n");
	// HotDrinkFactory::make_drink("coffee");
	// HotDrinkFactory::make_drink("tea");

	// 회사, 학교에서 커피 단체 주문이 들어왔다.
	// 회사에서는 coffee 100잔, 학교에서는 tea 30잔 주문이 들어왔다.
	// 갯수 만큼 일일히 객체를 생성한다면 아래 코드와 같을 것이다.
	std::vector<unique_ptr<IHotDrink>> coffeeTray;
	int coffeeOrderCnt = 100;
	for(int i = 0; i < coffeeOrderCnt; i++)
		coffeeTray.push_back(std::move(HotDrinkFactory::make_drink("coffee")));
		// coffeeTray.push_back(HotDrinkFactory::make_drink("coffee"));

	std::vector<unique_ptr<IHotDrink>> teaTray;
	int teaOrderCnt = 30;
	for(int i = 0; i < teaOrderCnt; i++)
		teaTray.push_back(std::move(HotDrinkFactory::make_drink("tea")));
		// teaTray.push_back(HotDrinkFactory::make_drink("tea"));

	std::vector<unique_ptr<IHotDrink>>::iterator it;
	for(it = coffeeTray.begin(); it != coffeeTray.end(); it++)
	{
		if(*it) printf("coffee\n");
		else printf("coffee empty\n");
	}
	for(it = teaTray.begin(); it != teaTray.end(); it++)
	{
		if(*it) printf("tea\n");
		else printf("tea empty\n");
	}

	// coffee 100잔, tea 30잔 등 속성이 정해져 있고 중복된 경우가 많을 경우
	// prototype pattern을 사용하면 편리하다.
	// clone() 메서드에서 객체의 생성과 복사루틴이 포함되어 있고,
	// 요구사항이 변경되어서 속성(용량(ml)등)을 변경해야 할 때,
	// 일일히 수정하지 않고 clone()메소드만 수정하면 된다는 장점이 있다. 
	unique_ptr<IHotDrink> originCoffee = std::move(HotDrinkFactory::make_drink("coffee"));
	std::vector<unique_ptr<IHotDrink>> coffeeVector;
	int coffeeCnt = 100;
	for(int i = 0; i < coffeeCnt; i++)
	{
		coffeeVector.push_back(std::move(originCoffee->clone()));
	}
	
	unique_ptr<IHotDrink> originTea = std::move(HotDrinkFactory::make_drink("tea"));
	std::vector<unique_ptr<IHotDrink>> teaVector;
	int teaCnt = 30;
	for(int i = 0; i < teaCnt; i++)
	{
		teaVector.push_back(std::move(originTea->clone()));
	}

	return 0;
}
