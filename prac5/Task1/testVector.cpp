/******************************************************************************
	//Please fill in your details here
	Name: Reece Volker
	Student number: u16312572
******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

#include "vectorFunctions.h"
/******************************************************************************
	We gave you a main, how nice are we ?
	This is a tester file for your functions. 
	Expected output does not guarantee full marks.
	Test your code for border cases.
******************************************************************************/
int main()
{

	int dimensionOfVector; 
	double magnitudeSum = 0; 
	bool isEqual; 
	int dotPro = 0; 
	
	cout << "Enter the dimension of the vectors: ";
	cin >> dimensionOfVector;

	int v1[dimensionOfVector];
	int v2[dimensionOfVector];

	cout << "Enter the elements of vector p: ";
	for(int i = 0; i < dimensionOfVector; i++){
		cin >> v1[i];
	}

	cout << "Enter the elements of vector q: ";
	for(int i = 0; i < dimensionOfVector; i++){
		cin >> v2[i];
	}

	cout << "The sum of vectors p and q is ";
	printVector(addVectors(v1,v2,dimensionOfVector), dimensionOfVector);

	cout << "\nThe difference of vectors q from p is ";
	printVector(subtractVectors(v1, v2, dimensionOfVector), dimensionOfVector);
	
	cout << "\nThe magnitude of vector p is ";
	magnitudeSum = magnitude(v1, dimensionOfVector);
	cout << fixed << setprecision(3) << magnitudeSum;

	cout << "\nThe vectors p and q are ";
	isEqual = equalVectors(v1, v2, dimensionOfVector);
	if (isEqual){
		cout << "EQUAL";
	}
	else {
		cout << "NOT EQUAL";
	}
	cout << "\nThe dot product of p and q is ";
	dotPro = dotProduct(v1, v2, dimensionOfVector);
	cout << dotPro << endl;
	return 0;
}
