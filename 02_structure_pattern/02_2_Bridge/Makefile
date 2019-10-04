.SUFFIXES : .c .cpp .o

OBJECTS	=	Renderer.o VectorRenderer.o RasterRenderer.o Shape.o Circle.o main.o
# SRCS	=	Renderer.cpp VectorRenderer.cpp RasterRenderer.cpp Shape.cpp Circle.cpp main.cpp
SRCS	=	VectorRenderer.cpp RasterRenderer.cpp Circle.cpp main.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
