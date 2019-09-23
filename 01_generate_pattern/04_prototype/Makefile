.SUFFIXES : .c .cpp .o

OBJECTS	=	main.o IHotDrink.o Coffee.o Tea.o HotDrinkFactory.o
SRCS	= main.cpp IHotDrink.cpp Coffee.cpp Tea.cpp HotDrinkFactory.cpp

CXX	= g++
CPPFLAGS	= -std=c++1y -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
