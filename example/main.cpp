/*

|Simple C++ DEBUG helper|
==================
Author: Gustavo Yudi Bientinezi Matsuzake (Helped by the internet)

Compile with -DDEBUG or define a DEBUG macro (#define DEBUG)
*/
#include <iostream>
#include <string>
#include "debug.hpp"

using namespace std;

namespace functions{
	void func(){
		DEBUG("func{...", 0);

		for(int i=0; i<5; i++)
			DEBUG("i = " << i, 1);
	

		DEBUG("...}", 0);
	}
}

int main(int argc, char* argv[]){
	DEBUG("main{...", 0);
	
	cout << "Hello Debug" << endl;	
	
	functions::func();

	DEBUG("...}", 0);
	return 0;
}
