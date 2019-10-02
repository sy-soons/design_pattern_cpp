.SUFFIXES : .c .cpp .o

OBJECTS	=	DVectorObject.o VectorRectangle.o LineToPointAdapter.o main.o
SRCS	=	DVectorObject.cpp VectorRectangle.cpp LineToPointAdapter.o main.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
