# https://www.softwaretestinghelp.com/cpp-makefile-tutorial/
# https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/
# https://www.w3schools.com/cpp/default.asp
# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall
# The build target 
TARGET = thread

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp -pthread

clean:
	$(RM) $(TARGET)
