##  prototype (프로토타입)  
coffee 100잔, tea 30잔 등 속성이 고정되어 있고 중복된 경우가 많을 경우  
prototype pattern을 사용하면 편리하다.  
고정된 속성을 가진 객체의 생성과 복제를 담당하는 패턴을 의미한다.  
다른 예로 게임을 예로 들면, 몬스터 중 좀비나 오크 같이 많은 인원이 있고  
힘이나, 체력, 마나, 공격력 등의 속성 등은 모두 같은 경우가 있다.  
이럴 경우 좀비나 오크 클래스 안에 생성과 복사 루틴을 clone()메서드에 넣으면  
더 깔끔한 코드를 만들 수 있다.  
(여기 저기 객체를 생성자에 인자를 넘겨서 생성하고 복제하면 검색에 어려움도 있고 코드 추적이 어려워진다.  
유지보수에 드는 시간 비용이 많이 들어 변화에 유연하게 대응하지 못하게 된다.)  
  
clone() 메서드에서 객체의 생성과 복사루틴이 포함되어 있고,  
요구사항이 변경되어서 속성(용량(ml)등)을 변경해야 할 때,  
일일히 수정하지 않고 clone()메소드만 수정하면 된다는 장점이 있다.  
  
