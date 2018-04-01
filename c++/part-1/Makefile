CC=g++
CFLAGS=-ansi -pedantic -Wall -g

default: all

all: helloworld casting operators enums structs \
	 conditionals arrays loops functions pointers \
	 memory-allocation smart-pointers exceptions \
	 type-inference classes vector

helloworld: helloworld.cpp
	$(CC) $(CFLAGS) -o bin/helloworld helloworld.cpp

casting: casting.cpp
	$(CC) $(CFLAGS) -o bin/casting casting.cpp

operators: operators.cpp
	$(CC) $(CFLAGS) -o bin/operators operators.cpp

enums: enums.cpp
	$(CC) $(CFLAGS) -o bin/enums enums.cpp

structs: structs.cpp
	$(CC) $(CFLAGS) -o bin/structs structs.cpp

conditionals: conditionals.cpp
	$(CC) $(CFLAGS) -o bin/conditionals conditionals.cpp

arrays: arrays.cpp
	$(CC) $(CFLAGS) -o bin/arrays arrays.cpp

loops: loops.cpp
	$(CC) $(CFLAGS) -o bin/loops loops.cpp

functions: functions.cpp
	$(CC) $(CFLAGS) -o bin/functions functions.cpp

pointers: pointers.cpp
	$(CC) $(CFLAGS) -o bin/pointers pointers.cpp

memory-allocation: memory-allocation.cpp
	$(CC) $(CFLAGS) -o bin/memory-allocation memory-allocation.cpp

smart-pointers: smart-pointers.cpp
	$(CC) $(CFLAGS) -o bin/smart-pointers smart-pointers.cpp

exceptions: exceptions.cpp
	$(CC) $(CFLAGS) -o bin/exceptions exceptions.cpp
	
type-inference: type-inference.cpp
	$(CC) $(CFLAGS) -o bin/type-inference type-inference.cpp

classes: classes.cpp
	$(CC) $(CFLAGS) -o bin/classes classes.cpp

vector: vector.cpp
	$(CC) $(CFLAGS) -o bin/vector vector.cpp

project: bin/main.o bin/deps/Employee.o
	$(CC) $(CFLAGS) -o bin/main bin/main.o bin/deps/Employee.o

bin/main.o: main.cpp bin/deps/Employee.o
	$(CC) $(CFLAGS) -o bin/main.o -c main.cpp

bin/deps/Employee.o: deps/Employee.cpp deps/Employee.h
	$(CC) $(CFLAGS) -o bin/deps/Employee.o -c deps/Employee.cpp

clean:
	rm -rf bin/*