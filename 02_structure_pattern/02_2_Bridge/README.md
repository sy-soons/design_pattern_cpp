## 브릿지 패턴  
예제는 기하도형클래스(Shape, Circle)과 렌더클래스(Renderer, VectorRenderer, RasterRenderer)로 구성되어 있다.  
렌더러는 벡터로 그리는 방법, LCD에 도형을 표시하는 것처럼 한줄씩 그리는 방법을 다르게 구현하기 위해  
Render의 draw를 override해서 재정의했다.  
main코드를 살펴보면 Circle객체는 Render타입의 객체(vector or raster)를 넘겨서 생성하고 있고  
raster, vector 모두 draw()함수를 호출하고 있다.  
여기서 Renderer클래스가 브릿지가 된다.  
Circle에서는 Renderer를 통해서 Draw를 하고 있고  
사용자는 Renderer참조변수를 Circle에 전달해서 어떤 타입을 생성할 것인지 초기화하고 있다.  
Renderer가 외부와 Circle의 중간에 위치하고 있는 브릿지 패턴인 것이다.  
  
브릿지는 연결 끈이나 접착제처럼 두가지를 연결한다.  
추상화를 하면 어떤 컴포넌트가 다른 컴포넌트와 그 상세 구현을 알지 못하는 상태여도 서로 연동할 수 있다.  
브릿지 패턴에 연결되는 것은 서로의 존재를 알아야만 한다.  
예제에서 Circle은 Renderer의 참조를 가져야 했고,  
Rnderer는 원을 어떻게 그리는지 알아야 했다.  
이 부분은 매개자(Meditator) 패턴과 대비되는 부분이다. 매개자 패턴은 서로를 직접적으로 알지 못해도
서로 연동할 수 있게 해준다.  