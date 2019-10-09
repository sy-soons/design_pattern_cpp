## Composition와 Aggregation  
컴포지트 패턴을 보기 전에 Composition과 Aggregation의 차이를 먼저 살펴보자.  
다른 객체와의 관계와 라이프 사이클을 비교해서 보아야한다.  
https://stackoverflow.com/questions/885937/what-is-the-difference-between-association-aggregation-and-composition
  
~~~Java
/*
For two objects, Foo and Bar the relationships can be defined
Association - I have a relationship with an object. Foo uses Bar
*/
public class Foo { 
    void Baz(Bar bar) {
    } 
};

/*
Composition - I own an object and I am responsible for its lifetime. When Foo dies, so does Bar
*/
public class Foo {
    private Bar bar = new Bar();
};

/*
Aggregation - I have an object which I've borrowed from someone else. When Foo dies, Bar may live on.
*/
public class Foo { 
    private Bar bar; 
    Foo(Bar bar) { 
       this.bar = bar; 
    }
}
~~~
  
 - Composition(구성) :  
   Aggregation의 특별한 경우이며, 죽음의 연관관계라고 부를 수도 있다.  
   자식 객체는 자신의 라이프사이클을 가지지 않으며, 부모 오브젝트가 소멸될 경우, 자식 오브젝트도 소멸된다.  
   위의 예제 코드를 참고하자.  
   객체를 소유하고 있으며, 이 객체의 lifetime에 대한 책임을 가진다. 그래서 Foo가 소멸되면 Bar도 소멸된다.  
  
 - Aggregation(집합) :  
   단어 자체를 직역하면 '집합'이라는 의미이다.  
   한 객체가 다른 객체를 소유하고 있는 경우를 말하며, has-a 관계라고 볼 수 있다.  
   위의 예제 코드를 참고하자.  
   객체를 소유하고 있으며, 소유한 객체는 다른 누군가로부터 빌려왔다. 그래서 Foo가 소멸되어도, Bar는 살아있을 것이다.  
  
  
## Composite(컴포지트 패턴)  
객체가 복수의 구성요소로 이루어져있다는 것을 의도적으로 사용자가 알 게 할 방법은 많지 않다.  
이를 위해 get()/set(), begin()/end() 를 노출하는 방법이 있지만,  
이러한 인터페이스의 노출이 객체의 구성 방식에 대해 실질적으로 의미있는 정보를 알려주는 것은 아니다.  
컴포지트 패턴은 어떤 객체들의 집합에 대해 개별 인터페이스를 동일하게 가져갈 수 있게 하는 것이다.  

