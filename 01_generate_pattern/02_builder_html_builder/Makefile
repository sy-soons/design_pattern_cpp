.SUFFIXES : .c .cpp .o

OBJECTS	=	builder.o HtmlBuilder.o HtmlElementList.o HtmlElement.o
SRCS	= builder.cpp HtmlBuilder.cpp HtmlElementList.cpp HtmlElement.cpp
# OBJECTS	=	builder.o HtmlBuilder2.o HtmlElementList.o HtmlElement.o
# SRCS	=	builder.cpp HtmlBuilder2.cpp HtmlElementList.cpp HtmlElement.cpp


CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o builder $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
