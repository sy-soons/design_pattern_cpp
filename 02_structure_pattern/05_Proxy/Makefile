.SUFFIXES : .c .cpp .o

OBJECTS	=	Image.o ProxyImage.o main.o
SRCS	=	Image.cpp ProxyImage.cpp main.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
