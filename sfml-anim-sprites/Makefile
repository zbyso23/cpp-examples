# https://www.softwaretestinghelp.com/cpp-makefile-tutorial/
# https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/
# https://www.w3schools.com/cpp/default.asp
# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall -lsfml-graphics -lsfml-window -lsfml-system
# The build target 
TARGET = sfmltest

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) -c ./$(TARGET).cpp
	$(CC) $(TARGET).o -o $(TARGET) $(CFLAGS) 

sprites: sprites.cpp
	$(CC) -c ./sprites.cpp
	$(CC) sprites.o -o sprites $(CFLAGS) 

dragon: dragon.cpp
	$(CC) -c ./dragon.cpp
	$(CC) dragon.o -o dragon $(CFLAGS) 

clean:
	$(RM) $(TARGET) $(TARGET).o
	$(RM) sprites sprites.o
	$(RM) dragon dragon.o
