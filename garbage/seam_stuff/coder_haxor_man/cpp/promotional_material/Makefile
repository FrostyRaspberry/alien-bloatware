SHELL = /bin/sh

CXX = x86_64-w64-mingw32-g++
CXXFLAGS = -Wpedantic -Wall -Wextra -O2
LDFLAGS =

all : a.exe

a.exe : main.o
	$(CXX) -o $@ $^ $(LDFLAGS)

main.o : main.cpp
	$(CXX) $(CXXFLAGS) -c $^

clean :
	rm -fv main.o a.exe
