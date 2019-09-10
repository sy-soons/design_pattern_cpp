.SUFFIXES : .c .cpp .o

OBJECTS	=	builder.o HtmlElementList.o HtmlElement.o
SRCS	= builder.cpp HtmlElementList.cpp HtmlElement.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o builder $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main

