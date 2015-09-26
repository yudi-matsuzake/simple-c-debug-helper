all: main debug0 debug1

main:	main.cpp  ../debug.hpp
	g++ main.cpp -o main.out -I../

#debug:	main.cpp  ../debug.h
#	g++ main.cpp  -o main-debug -I../ -DNDEBUG

debug0:	main.cpp  ../debug.hpp
	g++ main.cpp -o main-debug-0.out -I../ -DNDEBUG=0

debug1:	main.cpp  ../debug.hpp
	g++ main.cpp -o main-debug-1.out -I../ -DNDEBUG=1
