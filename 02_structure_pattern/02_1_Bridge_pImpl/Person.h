#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>

class Person
{
public:
    Person();
    ~Person();
    void greet();

private:
    class PersonImpl;
    PersonImpl *impl;//이 클래스의 구현부를 cpp파일에서 정의해서 헤더에서 숨길 수 있다.
    std::string name;
};

#endif