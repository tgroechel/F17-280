CXX = g++
FLAGS = -pedantic -Wall --std=c++11 -g

all: bigthree
	./bigthree

bigthree: bigthree.cpp
	${CXX} ${FLAGS} $^ -o $@

exam_style: exam_style_big3.cpp
	${CXX} ${FLAGS} $^ -o $@

clean:
	rm -vf dynamic exam_style
