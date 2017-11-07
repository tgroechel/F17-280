CXX = g++
FLAGS = -pedantic -Wall -Werror --std=c++11 -g

all: dynamic
	./dynamic

dynamic: dynamic.cpp
	${CXX} ${FLAGS} $^ -o $@

clean:
	rm -vf inherpoly
