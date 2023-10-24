//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q4. Write a function of the form void square(int &), where the int value that is
//				 passed by reference to the function is squared. Demonstrate that the function works
//				 correctly.
// References  : http://www.cplusplus.com/reference/cmath/pow/
//============================================================================

//Define Libraries required
#include <iostream>
#include <math.h>
using namespace std;

// Declare the desired calculation function
void square(int &value_passed){
	//multiply value by itself to get a square
	//value_passed = value_passed*value_passed;

	// Using math functions square value where pow( base, exp )
	value_passed = pow(value_passed,2);
}

int main_q4(){
	int x = 2;
	// Print out "Answer <i> is <value_answer>"
	for (int i=1; i<10; i++){
	cout << "Answer "<< i << " is " << x << endl;
	square(x);
	}

	// end
	return 0;
}
