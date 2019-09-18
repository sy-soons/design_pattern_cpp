.SUFFIXES : .c .cpp .o

OBJECTS	=	main.o PointFactory.o Point.o
SRCS	= main.cpp PointFactory.o Point.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
