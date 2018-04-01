CC=g++

default: all

all: helloworld casting operators enums structs conditionals

helloworld: part-1/helloworld.cpp
	$(CC) -o ./bin/helloworld ./part-1/helloworld.cpp

casting: part-1/casting.cpp
	$(CC) -o ./bin/casting ./part-1/casting.cpp

operators: part-1/operators.cpp
	$(CC) -o ./bin/operators ./part-1/operators.cpp

enums: part-1/enums.cpp
	$(CC) -o ./bin/enums ./part-1/enums.cpp

structs: part-1/structs.cpp
	$(CC) -o ./bin/structs ./part-1/structs.cpp

conditionals: part-1/conditionals.cpp
	$(CC) -o ./bin/conditionals ./part-1/conditionals.cpp

clean:
	rm -rf bin/*