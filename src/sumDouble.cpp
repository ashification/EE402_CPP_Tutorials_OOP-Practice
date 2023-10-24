//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q1. Write a function of the form: double sumDouble(double, double), which when
//				 given two double values, returns their sum. However, if the two double values are
//				 the same then it should return twice their sum.
//				 E.g.
//				   sumDouble(1, 2) -> 3
//				   sumDouble(3, 2) -> 5
//				   sumDouble(2, 2) -> 8
//============================================================================

//Define Libraries required
#include <iostream>
using namespace std;

// Declare the desired calculation function
double sumDouble(double value_1, double value_2){
	int value_answer = 0; // initialize and clear the answer variable

	// Check conditions
	//if the 2 given values are the same number sum and double
	if(value_1 == value_2){ value_answer = 2*(value_1 + value_2);}
	// If the 2 given values are in equal sum
	else{ value_answer = value_1 + value_2; }
	// Return answer to main
	return value_answer;
}

int main_q1(){
	int i = 1; // initialize and set the increment counter

	// Print out "Answer <i> is <value_answer>"
	cout << "Answer "<< i++ << " is " << sumDouble(1, 2) << endl;
	cout << "Answer "<< i++ << " is " << sumDouble(3, 2) << endl;
	cout << "Answer "<< i++ << " is " << sumDouble(2, 2) << endl;
	cout << "Answer "<< i++ << " is " << sumDouble(2, 4) << endl;
	cout << "Answer "<< i++ << " is " << sumDouble(4, 4) << endl;
	cout << "Answer "<< i++ << " is " << sumDouble(5, 5) << endl;
	cout << "Answer "<< i++ << " is " << sumDouble(6, 2) << endl;

	// end
	return 0;
}
