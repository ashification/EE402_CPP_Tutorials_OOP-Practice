//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q2. Write a function of the form: string helloName(string) that, when given a C++
//				 string type name, e.g. "Bob", returns a greeting of the form "Hello Bob!". e.g.
//					helloName("Bob") -> "Hello Bob!"
//					helloName("Alice") -> "Hello Alice!"
//					helloName("X") -> "Hello X!"
//============================================================================
//Define Libraries required
#include <iostream>
#include <cstring>
using namespace std;

// Declare the desired text manipulation function
string helloName(string person_name){
	// Initialize and set the new string to be used
	string person_greeting = "Hello " + person_name + "!";
	// Return answer to main
	return person_greeting;
}

int main_q2() {
	int i = 1; // initialize and set the increment counter

	// Print out "Person <i> Greeting <value_answer>"
	cout << "Person "<< i++ << " Greeting " << helloName("Bob") << endl;
	cout << "Person "<< i++ << " Greeting " << helloName("Alice") << endl;
	cout << "Person "<< i++ << " Greeting " << helloName("X") << endl;
	cout << "Person "<< i++ << " Greeting " << helloName("string_test") << endl;

	// end
	return 0;
}
