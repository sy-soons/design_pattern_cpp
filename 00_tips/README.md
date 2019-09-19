
# C++ 관련 지식들  
디자인 패턴 예제들을 짜면서 몰랐던 포인트들을  
이해, 정리한 내용을 정리  
  
## 멤버 초기화 리스트(Member Initialization List)  
멤버 초기화 리스트를 어떻게 쓰는 것인지를 모르는 것이 아니다.  
생성자 안에서 해도 되는데, 왜 초기화리스트를 쓰는지,  
어느 시점에 불리고 왜 필요한 것인지를 이해하는 것이 중요하다.  
  
클래스의 정의는 실제 메모리에 인스턴스를 생성하는 작업이 아니기 때문에  
생성과 동시에 초기화 되어야 하는 경우(아래의 목록 참고), 초기화리스트에서 초기화를 해주어야한다.  
(C++11에서는 header의 선언부에서 선언과 동시에 초기화되는 것이 가능하다)  
즉, 멤버 이니셜라이저를 통한 초기화는 객체의 생성 이전에 이루어진다. 그래서 아래의 경우, 초기화 리스트를 사용한다.  
 - 상수는 선언과 동시에 초기화되어져야한다.  
 - 레퍼런스 변수도 생성과 동시에 초기화되어야한다.  
 - 객체 멤버의 초기화  
(참고: https://thrillfighter.tistory.com/222)
---------------------------------------------------------  

## static 멤버 함수의 선언, 정의 방법
헤더의 선언에서는 static 키워드를 붙이고  
코드의 정의에서는 static 키워드를 붙이지 않아도 된다.  
https://www.learncpp.com/cpp-tutorial/812-static-member-functions/
  
## 전방선언(forward declaration)
 - 헤더 파일들의 상호 참조 방지,  
클래스의 이름만 필요할 경우, 전방선언을 사용.  
 - 사용 예(03_2_factory_class)  
(예제에서 발생했었던 상호참조 문제점 - 03_2_factory_class/Point.h)  
Point.h에서 PointFactory.h를 include하고 PointFactory.h에서 Point.h에서 PointFactory.h를  include할 경우, 상호참조로 인해 빌드 시에 무한루프에 빠지게 된다.  
(해결 방법)  
Point에서는 멤버변수(x,y)에 PointFactory에 접근하기 위해 friend로 class 선언하고 있다.  
friend class 로 선언하는 부분 자체가 전방선언이므로  
Point에서는 PointFactory를 include는 하지 않고  
PointFactory에서만 Point를 include하도록 하면 된다.  
(참고)  
어떤 방식으로 클래스 정의를 사용하지 않는 한 헤더를 포함할 필요가 없다.  
클래스를 이름으로 참조하는 경우,  
클래스의 인스턴스에 대한 포인터만 있고 그것을 전달하는 경우,  
컴파일러는 클래스 정의를 볼 필요가 없다.  
https://stackoverflow.com/questions/10113374/including-header-file-in-class-that-is-a-friend
  
# C++11 관련 지식들
예제를 구현하면서 알게된 C++11에서 추가된 내용들에 대한 정리

## std function, lambda
https://en.cppreference.com/w/cpp/utility/functional/function  
https://en.cppreference.com/w/cpp/language/lambda  
https://docs.microsoft.com/ko-kr/cpp/cpp/lambda-expressions-in-cpp?view=vs-2019

## enum class 장점
기존 enum에서 개선된 점
https://unikys.tistory.com/376


## unique_ptr, shared_ptr
포인터 소멸에 대한 책임권(소유권)
make_unique() reference:
https://en.cppreference.com/w/cpp/memory/unique_ptr/make_unique
  
---------------------------------------------------------  
# 디자인패턴 관련 지식들  
SOLID 원칙이나 다른 언어에서의 사용 예  


# Makefile
 - g++ 버전 관련(make_unique) 
linux g++ 4.8에서는 make_unique가 지원되지 않는다.
c++14를 사용하기 위해서는 CPPFLAG로 c++1y를 사용하면 되지만,
그래도 make_unique는 사용이 불가능하다.
4.9부터는 지원된다고 한다.
https://stackoverflow.com/questions/24609271/errormake-unique-is-not-a-member-of-std
make_unique는 c++14에서부터 사용이 가능하다는 글
https://codeday.me/ko/qa/20190321/112766.html
c++14에서부터 사용이 가능하므로 c++11에서는 직접 만들어서 사용이 가능하다는 글
https://stackoverflow.com/questions/24609271/errormake-unique-is-not-a-member-of-std


 - no rule to make target error
 https://stackoverflow.com/questions/834748/gcc-makefile-error-no-rule-to-make-target
해당 파일이 없거나, 해당 코드의 디렉토리가 올바르지 않을 가능성이 높다.
~~~
"No rule to make target 'vertex.cpp', needed by 'vertex.o'.  Stop."
일반적으로 vertex.cpp사용할 수 있는 파일이 없기 때문 입니다. 다음을 확인하십시오.
 - 해당 파일이 존재합니다.
 - 당신이 만들 때 당신은 올바른 디렉토리에 있습니다.
그 외에는 제안 할 것이 많지 않습니다. 해당 디렉토리의 디렉토리 목록을 제공 할 수 있습니다.
~~~
