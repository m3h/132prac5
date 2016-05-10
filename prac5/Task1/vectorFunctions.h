#ifndef VECTORS_H
#define VECTORS_H
/************************************************
	Header file for funcion definitions
************************************************/

//Print the contents of the vector	
void printVector(int [], size_t);

//Add vectors 
int* addVectors(const int[], const int[], size_t);

//Subtract vectors 
int* subtractVectors(const int[], const int[], size_t);

//Calculates magnitude of the vector
double magnitude(const int[], size_t);

//check if the vectors are equal
bool equalVectors(const int[], const int[], size_t);

//Calculates dot product of the vectos
int dotProduct(const int[], const int[], size_t);

#endif