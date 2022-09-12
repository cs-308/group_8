obj = main.cpp factorial.o hello.o gcd.o

main : $(obj)
	g++ -o main $(obj)

factorial.o : functions.h factorial.cpp

hello.o : functions.h hello.cpp

gcd.o : functions.h gcd.cpp

clean :
	rm *.o main
