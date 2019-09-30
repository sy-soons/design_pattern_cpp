#include "Database.h"
#include <iostream>
// #include <exception>

Database::Database()
{
    static int instance_count = 0;
    if(++instance_count > 1)
        std::cout << "Cannot make > 1 database!" << std::endl;
        // throw std::exception("Cannot make > 1 database!");
}
#define NORMAL_SINGLETON
#ifdef NORMAL_SINGLETON
Database& Database::get()
{
    //static 전역 객체는 각각의 컴파일 단위 바이너리에서 초기화 순서가 정의되어있지 않다는 문제점이 있다.
    //한 모듈에서 전역 객체를 참조할 때 그 전역 객체가 참조하는 또 다른 객체가 아직 초기화되지 않는 상태일 수 있다.
    //또 사용자가 이 인터페이스에 전역객체가 있다는 사실을 어떻게 알 수 있는가 하는 문제도 있다.
    //그래서 사용자가 더 알기 쉽도록 필요한 객체를 리턴하는 전역함수를 제공하는 방법이 있다.
    //::만 입력해서 전역변수의 존재를 알수 있기 때문이다.
    static Database database;
    return database;
}
#else//힙 메모리 할당 전역 객체 생성
Database& Database::get()
{
    //힙 메모리를 할당받아서 객체를 생성한다.
    //전체 객체를 static으로 하지 않고 포인터만 static으로 존재하도록 하는 방법
    static Database* database = new Database();
    return *database;
}
#endif