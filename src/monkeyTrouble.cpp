//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q3. We have two monkeys, a and b, and the parameters aSmile and bSmile indicate
//				 if each is smiling. We are in trouble if they are both smiling or if neither of them is
//				 smiling. Return true if we are in trouble. e.g.
//				  	 monkeyTrouble(true, true) -> true
//					 monkeyTrouble(false, false) -> true
//					 monkeyTrouble(true, false) -> false
//				 You do not need to use classes for this question
//============================================================================

//Define Libraries required
#include <iostream>
using namespace std;

// Declare the desired calculation function
string monkeyTrouble(bool aSmile, bool bSmile){
	string value_answer= " "; // initialize and clear the answer variable

	// Check conditions
	//if the 2 given values are the same return true
	if(aSmile == bSmile){ value_answer = "true";}
	// If the 2 given values are different return false
	else{ value_answer = "false"; }
	// Return answer to main
	return value_answer;
}

int main_q3(){
	int i = 1; // initialize and set the increment counter

	// Print out "Monkey Check <i> are we in trouble <value_answer>"
	cout << "Monkey Check "<< i++ << " are we in trouble " << monkeyTrouble(true, true) << endl;
	cout << "Monkey Check "<< i++ << " are we in trouble " << monkeyTrouble(true, false) << endl;
	cout << "Monkey Check "<< i++ << " are we in trouble " << monkeyTrouble(false, true) << endl;
	cout << "Monkey Check "<< i++ << " are we in trouble " << monkeyTrouble(false, false) << endl;

	// end
	return 0;
}
