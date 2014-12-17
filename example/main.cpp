/*

|Simple C++ DEBUG helper|
==================
Author: Gustavo Yudi Bientinezi Matsuzake (Helped by the internet)

Compile with -DDEBUG or define a DEBUG macro (#define DEBUG)
*/
#include <iostream>
#include <string>
#include "debug.h"

using namespace std;

namespace functions{
	void func(){
		DEBUG("func{...");

		for(int i=0; i<5; i++)
			DEBUG("i = " << i);
	

		DEBUG("...}");
	}
}

int main(int argc, char* argv[]){
	DEBUG("main{...");
	
	cout << "Hello Debug" << endl;	
	
	functions::func();

	DEBUG("...}");
	return 0;
}
