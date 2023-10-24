//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q6. Write a function of the form bool sum28(int[], int) that when given an array of
//				 ints and the array size, returns true if the sum of all the 2's in the array is exactly 8.
//				 sum28({2, 3, 2, 2, 4, 2},6) -> true
//				 sum28({2, 3, 2, 2, 4, 2, 2},7) -> false
//				 sum28({1, 2, 3, 4},4) -> false
//
// References  :
//============================================================================



//Define Libraries required
#include <iostream>
using namespace std;

bool sum28(int arraypassed[], int arraysize){
	int sumtotal =0;
	for(int i=0; i<arraysize; i++){ if(arraypassed[i] == 2){sumtotal = sumtotal + arraypassed[i];}}
	if(sumtotal == 8){ return true;} else {return false;}
}

int main_q6(){

	bool result;

	int firstarray[] = {2, 3, 2, 2, 4, 2};
	size_t sizefirstarray = sizeof(firstarray) / sizeof(firstarray[0]);
	result = sum28(firstarray,sizefirstarray);
	cout << "Sum of all the 2's in first  array equals 8  "<< result << endl;

	int secondarray[] = {2, 3, 2, 2, 4, 2, 2};
	size_t sizesecondarray = sizeof(secondarray) / sizeof(secondarray[0]);
	result = sum28(secondarray,sizesecondarray);
	cout << "Sum of all the 2's in second array equals 8  "<< result << endl;

	int thirdarray[] = {1, 2, 3, 4};
	size_t sizethirdarray = sizeof(thirdarray) / sizeof(thirdarray[0]);
	result = sum28(thirdarray,sizethirdarray);
	cout << "Sum of all the 2's in third  array equals 8  "<< result << endl;

	return 0;
}

