SHELL = /bin/sh

CXX = x86_64-w64-mingw32-g++
CXXFLAGS = -Wpedantic -Wall -Wextra -g
LDFLAGS = -mwindows

all : promo_mat.exe

promo_mat.exe : main.o
	$(CXX) -o $@ $^ $(LDFLAGS)

main.o : main.cpp
	$(CXX) $(CXXFLAGS) -c $^

clean :
	rm -fv main.o promo_mat.exe
