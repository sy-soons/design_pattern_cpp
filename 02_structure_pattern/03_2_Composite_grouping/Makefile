.SUFFIXES : .c .cpp .o

OBJECTS	=	GraphicObject.o Circle.o Group.o main.o
SRCS	=	GraphicObject.cpp Circle.cpp Group.cpp main.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
