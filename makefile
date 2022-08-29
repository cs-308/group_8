obj = factorial.o hello.o

main : main.cpp $(obj)
	g++ -o main main.cpp $(obj)

factorial.o : factorial.cpp functions.h

hello.o : hello.cpp functions.h
