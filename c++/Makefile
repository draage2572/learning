CC=g++

default: all

all: helloworld casting operators

helloworld: part-1/helloworld.cpp
	$(CC) -o ./bin/helloworld ./part-1/helloworld.cpp

casting: part-1/casting.cpp
	$(CC) -o ./bin/casting ./part-1/casting.cpp

operators: part-1/operators.cpp
	$(CC) -o ./bin/operators ./part-1/operators.cpp

clean:
	rm -rf bin/*