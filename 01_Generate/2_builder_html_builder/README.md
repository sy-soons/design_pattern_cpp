# 단순한 형태의 빌더 패턴(HtmlBuilder)
객체의 생성은 다른 클래스에 위임하고  
HTML 구성요소의 생성만을 전담한다.  

# 흐름식 빌더 형태(HtmlBuilder2)
add_child의 리턴 값을 전달해주도록 변경하면  
좀 더 편리한 흐름식 인터페이스(fluent interface) 스타일의 빌더를 만들 수 있다.  
Makefile에서 OBJECT, SRC를 HtmlBuilder2용으로 변경  
builder.cpp에서 simple builder대신 fluent interface builder로 사용하도록 조건 컴파일문을 수정  