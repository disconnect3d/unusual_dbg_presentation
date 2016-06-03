all:
	@echo "Authors: Dominik Czarnota & Darek Zielinski"
	@echo "This makefile is about gcc/clang sanitizers examples."
	@echo "----------------------------------------------------------------------------------"

	@echo "make gcc-<sanitizer> - compile with g++ and launch with -fsanitize=<sanitizer>"
	@echo "make clang-<sanitizer> - compile with clang++ and launch with -fsanitize=<sanitizer>"
	@echo "Prepared examples: leak, undefined, thread"

#gcc-thread:
#	@echo "Sorry, didn't manage to launch it on my machine! :-("

gcc-%:
	g++ -ggdb -std=c++11 -fsanitize=$* $*.cpp -o main.out

clang-thread:
	clang++ -ggdb -std=c++11 -pthread -lpthread -fsanitize=thread thread.cpp -o main.out	

clang-%:
	clang++ -ggdb -std=c++11 -fsanitize=$* $*.cpp -o main.out

clean:
	rm *.out
