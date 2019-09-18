# 팩터리 패턴  
## 이전 예제(03_0_factory)에서 Point의 문제점  
03_0_factory에서 구현한 Point클래스는 아래의 불편함이 있다.  
 - 사용자가 좌표타입(enum)을 알고 사용해야한다는 점이 불편할 수 있다.  
 - 또, header file의 생성자 선언부의 전달인자(x, y)만 보고 둘 중 어떤 것이 r, theta인지 파악하기 어렵다.  
  
## 팩터리 클래스 구현  
팩터리 메서드(03_1_factory_method)와 달리 Point를 생성하는 함수들을 별도의 클래스에 몰아 넣을 수 있다.  
Point클래스의 생성자는 외부에서 사용자가 접근하지 못하도록 private로 선언한다.  
PointFactory클래스에서 Point생성자에 접근 가능하도록 PointFactory클래스를 Point클래스에 friend 클래스로 선언한다.  
상호참조의 문제가 있기 때문에 Point.h에서는 PointFactory.h를 include를 하지 않는다.  
(friend class PointFactory; 이 구문 자체가 전방 선언을 의미하기 때문이다.)  
  