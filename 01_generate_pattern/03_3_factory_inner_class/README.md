# 팩터리 패턴  
## 이전 예제(03_0_factory)에서 Point의 문제점  
03_0_factory에서 구현한 Point클래스는 아래의 불편함이 있다.  
 - 사용자가 좌표타입(enum)을 알고 사용해야한다는 점이 불편할 수 있다.  
 - 또, header file의 생성자 선언부의 전달인자(x, y)만 보고 둘 중 어떤 것이 r, theta인지 파악하기 어렵다.  
    
## 팩터리 클래스 구현  
팩터리 메서드(03_2_factory_class)와 달리 Point를 생성하는 함수들을 내부 클래스에 구현할 수 있다.  
C#, Java등의 언어에는 friend키워드가 존재하지 않기 때문에 이런 방식으로 많이 구현한다.  
내부클래스인 PointFactory는 public으로 선언이 되어서 외부에서 사용자가 접근이 가능하다.  
또, PointFactory는 Point클래스의 내부클래스 이므로 private멤버(x, y)에 자유로운 접근이 가능하다.  
이렇게 구현하면, 사용자는 Point생성자에는 접근하지 못하고 Point::PointFactory를 통해서 Point클래스의 객체를 생성할 수 있게 된다.  
    
