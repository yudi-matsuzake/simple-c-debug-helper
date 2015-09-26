all: main debug0 debug1

main:	main.cpp ../debug.cpp ../debug.hpp
	g++ main.cpp ../debug.cpp -o main -I../

#debug:	main.cpp ../debug.cpp ../debug.h
#	g++ main.cpp ../debug.cpp -o main-debug -I../ -DNDEBUG

debug0:	main.cpp ../debug.cpp ../debug.hpp
	g++ main.cpp ../debug.cpp -o main-debug-0 -I../ -DNDEBUG=0

debug1:	main.cpp ../debug.cpp ../debug.hpp
	g++ main.cpp ../debug.cpp -o main-debug-1 -I../ -DNDEBUG=1
