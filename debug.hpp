/*

|Simple C++ DEBUG helper|
==================
Author: Gustavo Yudi Bientinezi Matsuzake (Helped by the internet)

Compile with -DDEBUG or define a DEBUG macro (#define DEBUG)
*/

#ifndef _DEBUG_H_
#include <sstream>

using namespace std;

/*	MACROS	*/
/*
MACRO FUNCTION TO_STRING (X)
=============================
To do something like that:

DEBUG("i = " << i);

*/
#define TO_STRING( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

/*
MACRO FUNCTION DEBUG(X)
=======================
call debug(string func, string msg) function, where:
func - name function
msg  - debug message

This MACRO calls the debug() with the macro __PRETTY_FUNCTION__ that returns the name of the function.
*/

#ifdef NDEBUG
	#define DEBUG(X, Y) if(Y <= NDEBUG) debug(__PRETTY_FUNCTION__, TO_STRING(X), Y)
#else
	/*if the MACRO DEBUG isn't defined the DEBUG(X) MACRO
	  will not produce any code*/
	#define DEBUG(X, Y)
#endif

/*	FUNCTIONS 	*/

void debug(string f, string msg, unsigned int n){
	#ifdef DEBUG_SHOW_PREFIX
		cout << "DEBUG:(" << n << ")";
	#endif
	for(int i=0; i<(n*2); i++) cout << ' ';
	cout << f << ": " << msg << endl;
}

#endif //_DEBUG_H_
