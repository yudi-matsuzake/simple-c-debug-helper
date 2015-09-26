all: main debug0 debug1 debug1-prefix debug1-colors debug1-prefix-colors

main:	main.cpp  ../debug.hpp
	g++ main.cpp -o main.out -I../

#debug:	main.cpp  ../debug.h
#	g++ main.cpp  -o main-debug -I../ -DNDEBUG

debug0:	main.cpp  ../debug.hpp
	g++ main.cpp -o main-debug-0.out -I../ -DNDEBUG=0

debug1:	main.cpp  ../debug.hpp
	g++ main.cpp -o main-debug-1.out -I../ -DNDEBUG=1

debug1-prefix:	main.cpp  ../debug.hpp
	g++ main.cpp -o main-debug-1-prefix.out -I../ -DNDEBUG=1 -DDEBUG_PREFIX_ENABLE

debug1-colors:	main.cpp  ../debug.hpp
	g++ main.cpp -o main-debug-1-colors.out -I../ -DNDEBUG=1 -DDEBUG_COLOR_ENABLE

debug1-prefix-colors:	main.cpp  ../debug.hpp
	g++ main.cpp -o main-debug-1-prefix-colors.out -I../ -DNDEBUG=1 -DDEBUG_COLOR_ENABLE -DDEBUG_PREFIX_ENABLE
