all: main debug

main:	main.cpp ../debug.cpp ../debug.h
	g++ main.cpp ../debug.cpp -o main -I../

debug:	main.cpp ../debug.cpp ../debug.h
	g++ main.cpp ../debug.cpp -o main-debug -I../ -DDEBUG
