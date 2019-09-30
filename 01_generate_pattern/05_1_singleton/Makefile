.SUFFIXES : .c .cpp .o

# OBJECTS	=	main.o ConfigurableRecordFinder.o Database.o DummyDatabase.o
# SRCS	= main.cpp ConfigurableRecordFinder.cpp Database.cpp DummyDatabase.cpp

OBJECTS	=	Database.o DummyDatabase.o ConfigurableRecordFinder.o main.o
SRCS	= Database.cpp DummyDatabase.cpp ConfigurableRecordFinder.cpp main.cpp

CXX	= g++
CPPFLAGS	= -std=c++11 -lstring -liostream
$(TARGET) : $(OBJECTS)

all: main
main : $(OBJECTS)
	$(CXX) -o main $(OBJECTS)
clean:
	rm -rf $(OBJECTS) $(TARGET)
	rm -rf main
