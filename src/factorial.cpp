//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q9. Write a function of the form int factorial(int) that when passed a value of 1 or
//               more, returns the factorial of n, which is n * (n‐1) * (n‐2) ... 1. Compute the result
//               recursively by calling the factorial function itself (Do not use loops or pointers).
//                 factorial(1) -> 1
//                 factorial(2) -> 2
//                 factorial(5) -> 120
//
// References  :
//============================================================================


//Define Libraries required
#include <iostream>
#include <string.h>
using namespace std;

int factorialValue;
int nextvalue;

int factorial(int passedValue){

	if(passedValue > 1){
		nextvalue = passedValue - 1;
		factorialValue = passedValue * factorial(nextvalue);
	}
	else if(passedValue == 1){return 1;}
	else if(passedValue <= 0){ return 0;}
	return factorialValue;
}

int main_q9() {
	//cout << "Start" << endl;
	int result = 0;
	for(int i=-3; i<8; i++){
		factorialValue = 0;
		nextvalue = 0;
		result=factorial(i);
		cout << "Factorial of "<< i << " (" << i << "!) is equal to  "<< result << endl;
	}
	//cout << "End" << endl;
	return 0;
}


