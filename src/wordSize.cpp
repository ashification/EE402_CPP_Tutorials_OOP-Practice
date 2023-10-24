//============================================================================
// Name        : EE0402_Tutorial1_ALee.cpp
// Author      : Aisling Lee
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Q8. Using the same syntax as in Q7, write a program that will display the distribution
//               of the number of words of each letter length (up to 9 letters long) in a sentence that
//               is passed to that application.
//               Wordsize : the final exam will be based on the one lecture you missed and the one book you didnt read
//               should output:
//              				 There are 19 strings
//  				             The number of strings with:
//  				             Length 1 characters: 0
// 				            	 Length 2 characters: 2
//  				             Length 3 characters: 8
//  				             Length 4 characters: 4
//  				             Length 5 characters: 3
//  				             Length 6 characters: 1
//  				             Length 7 characters: 1
//   				             Length 8 characters: 0
//             				     Length 9 characters: 0
//
// References  :
//============================================================================

//Define Libraries required
#include <iostream>
#include<string.h>
using namespace std;

int main_q8(int numberofarguments, char *arrayofarguments[]){

	int stringlength =0;
	int counter1 = 0;
	int counter2 = 0;
	int counter3 = 0;
	int counter4 = 0;
	int counter5 = 0;
	int counter6 = 0;
	int counter7 = 0;
	int counter8 = 0;
	int counter9 = 0;

	cout << "There are " << numberofarguments - 1 << " Strings" << endl;
	for(int i=1; i<numberofarguments; i++){
		stringlength = strlen(arrayofarguments[i]);
		if(stringlength == 1){counter1++;}
		if(stringlength == 2){counter2++;}
		if(stringlength == 3){counter3++;}
		if(stringlength == 4){counter4++;}
		if(stringlength == 5){counter5++;}
		if(stringlength == 6){counter6++;}
		if(stringlength == 7){counter7++;}
		if(stringlength == 8){counter8++;}
		if(stringlength == 9){counter9++;}
	}


	cout << "Length 1 Characters: " << counter1 << endl;
	cout << "Length 2 Characters: " << counter2 << endl;
	cout << "Length 3 Characters: " << counter3 << endl;
	cout << "Length 4 Characters: " << counter4 << endl;
	cout << "Length 5 Characters: " << counter5 << endl;
	cout << "Length 6 Characters: " << counter6 << endl;
	cout << "Length 7 Characters: " << counter7 << endl;
	cout << "Length 8 Characters: " << counter8 << endl;
	cout << "Length 9 Characters: " << counter9 << endl;

	return 0;
}



