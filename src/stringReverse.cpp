//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q7. We can receive strings from the command line in C/C++ as the main function can be written in the form:
//					 int main(int argc, char *argv[])
//				Use this ability to read in an array of strings from the command line and then print them out in reverse order
//				e.g.
//				stringReverse input: The reverse side also has a reverse side
//				should output:      “side reverse a has also side reverse The”
//
// References  :
//============================================================================



//Define Libraries required
#include <iostream>
using namespace std;

int main_q7(int numberofarguments, char *arrayofarguments[]){

	//cout << "There are " << numberofarguments << " arguments" << endl;
	//cout << "First Argument is  " << arrayofarguments[0] << " "<< arrayofarguments[1] << endl;

	for(int i=1; i<numberofarguments; i++){
		cout << arrayofarguments[numberofarguments-i] << " ";
	}

	return 0;
}
