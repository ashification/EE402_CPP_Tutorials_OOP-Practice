//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q5. Write a function of the form int countEvens(int[], int) that returns the number
//				 of even ints in a given array, when passed the array and the number of elements in
//				 the array. Remember the % "mod" operator computes the remainder, e.g. 5 % 2 is 1.
//				 countEvens({2, 1, 2, 3, 4},5) -> 3
//				 countEvens({2, 2, 0},3) -> 3
//				 countEvens({1, 3, 5},3) -> 0

// References  :
//============================================================================

//Define Libraries required
#include <iostream>
using namespace std;

int countEvens(int arraypassed[], int arraysize){
	int numberofEvens =0;
	for(int i=0; i<arraysize; i++){
		if(arraypassed[i]%2 ==0){numberofEvens++;}
	}
	return numberofEvens;
}


int main_q5() {

	int result = 0;

	int firstarray[] = {2,1,2,3,4};
	size_t sizefirstarray = sizeof(firstarray) / sizeof(firstarray[0]);
	result = countEvens(firstarray,sizefirstarray);
	cout << "Number of Even values in first array  "<< result << endl;

	int secondarray[] = {2, 2, 0};
	size_t sizesecondarray = sizeof(secondarray) / sizeof(secondarray[0]);
	result = countEvens(secondarray,sizesecondarray);
	cout << "Number of Even values in second array  "<< result << endl;

	int thirdarray[] = {1, 3, 5};
	size_t sizethirdarray = sizeof(thirdarray) / sizeof(thirdarray[0]);
	result = countEvens(thirdarray,sizethirdarray);
	cout << "Number of Even values in third array  "<< result << endl;

	return 0;
}




