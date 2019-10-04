#include "Person.h"
#include <stdio.h>

//pImpl 구현부
//https://stackoverflow.com/questions/51810378/invalid-use-of-incomplete-type-error-in-pimpl-idiom
//전방 선언한 pImpl클래스는 Person클래스보다 먼저 선언, 정의해주어야 한다.
class Person::PersonImpl
{
public:
    void greet(Person* p);
};

void Person::PersonImpl::greet(Person* p)
{
    printf("hello %s\n", p->name.c_str());
}


//Person class
Person::Person()
    : impl(new PersonImpl)//impl 동적 할당
{
}

Person::~Person()
{
    delete impl;//impl 해제
}

void Person::greet()
{
    impl->greet(this);
}
