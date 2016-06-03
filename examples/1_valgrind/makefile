all:
	@echo "Options:"
	@echo "make memcheck	- builds memcheck example"
	@echo "make datarace 	- builds datarace example"


memcheck:
	gcc -g -Wall -Wextra -std=c11 memcheck.c -o memcheck.out
	@echo "Now use \"valgrind ./memcheck.out\""

datarace:
	g++ -g -O0 -Wall -Wextra -std=c++14 -lpthread -pthread datarace.cpp -o datarace.out
	@echo "Now use 'valgrind --tool=helgrind ./datarace.out'"

