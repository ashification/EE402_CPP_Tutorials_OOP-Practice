//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q10. Write a function of the form: int* reverse(int[],int) that, when given an array of
//               ints returns a new array with the elements in reverse order, so an array of size 5
//               elements with the array values {11, 22, 33, 44, 55} becomes {55,44,33,22,11}.
//				 e.g.
//              	 reverse({11, 22, 33, 44, 55}) -> {55,44,33,22,11}
//             	  	 reverse({5, 11, 9})	       -> {9, 11, 5}
//              	 reverse({7, 0, 0, 10})        -> {10, 0, 0, 7}
//
// References  :
//============================================================================


//Define Libraries required
#include <iostream>
#include<string.h>
using namespace std;

int*  reverse(int arrayofarguments[],int numberofarguments){

	int *backwardsarray = new int[numberofarguments];

	for(int i=0; i<numberofarguments; i++){
		backwardsarray[i] = arrayofarguments[numberofarguments-i-1];
	}

	return backwardsarray;
}

int main_10() {
	cout << "Start" << endl;

	int firstarray[] = {11, 22, 33, 44, 55};
	size_t sizefirstarray = sizeof(firstarray) / sizeof(firstarray[0]);

	int *destination = reverse(firstarray,sizefirstarray);

	cout << "Array Given is: ";
	for(int i=0; i<sizefirstarray; i++){
	cout << firstarray[i] << " ";
	}

	cout << " Array Backwards is: ";
	for(int i=0; i<sizefirstarray; i++){
	cout << *(destination + i)<< " ";
	}

	cout << " "<< endl;

	cout << "End" << endl;
	return 0;
}



