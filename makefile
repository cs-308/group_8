obj = main.cpp factorial.o hello.o

main : $(obj)
	g++ -o main $(obj)

factorial.o : functions.h factorial.cpp

hello.o : functions.h hello.cpp

clean :
	rm *.o main
