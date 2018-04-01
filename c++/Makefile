CC=g++

default: all

all: helloworld casting operators enums structs \
	 conditionals arrays loops functions pointers \
	 memory-allocation smart-pointers exceptions \
	 type-inference classes

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

arrays: part-1/arrays.cpp
	$(CC) -o ./bin/arrays ./part-1/arrays.cpp

loops: part-1/loops.cpp
	$(CC) -o ./bin/loops ./part-1/loops.cpp

functions: part-1/functions.cpp
	$(CC) -o ./bin/functions ./part-1/functions.cpp

pointers: part-1/pointers.cpp
	$(CC) -o ./bin/pointers ./part-1/pointers.cpp

memory-allocation: part-1/memory-allocation.cpp
	$(CC) -o ./bin/memory-allocation ./part-1/memory-allocation.cpp

smart-pointers: part-1/smart-pointers.cpp
	$(CC) -o ./bin/smart-pointers ./part-1/smart-pointers.cpp

exceptions: part-1/exceptions.cpp
	$(CC) -o ./bin/exceptions ./part-1/exceptions.cpp
	
type-inference: part-1/type-inference.cpp
	$(CC) -o ./bin/type-inference ./part-1/type-inference.cpp

classes: part-1/classes.cpp
	$(CC) -o ./bin/classes ./part-1/classes.cpp

clean:
	rm -rf bin/*