.SUFFIXES : .c .cpp .o

OBJECTS	=	Widget.o TextField.o Decorator.o BorderDecorator.o ScrollDecorator.o main.o
SRCS	=	Widget.cpp TextField.cpp Decorator.cpp BorderDecorator.cpp ScrollDecorator.cpp main.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
