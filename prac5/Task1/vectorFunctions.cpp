#include <iostream>
#include <cmath>
#include <vector>

#include "vectorFunctions.h"

using namespace std;

void printVector( int v[], size_t s)
{
    cout << "[";

    int i;
    for( i = 0; i < ( s - 1); i++)
            cout << v[i] << ", ";

    cout << v[i] << "]";
}

double magnitude( const int v[], size_t dim )
{
    double sum = 0;

    for( int i = 0; i < dim; i++ )
        sum += pow( v[i], 2 );

    return sqrt( sum );
}

int* addVectors( const int v1[], const int v2[], size_t dim )
{
    int *sum = new int[dim];

    for( int i = 0; i < dim; i++ )
    {
        sum[i] = v1[i] + v2[i];
    }

    return sum;
}    

int* subtractVectors( const int v1[], const int v2[], size_t dim )
{
    int *difference = new int[dim];

    for( int i = 0; i < dim; i++ )
    {
        difference[i] = v1[i] - v2[i];
    }

    return difference;
}

bool equalVectors( const int v1[], const int v2[], size_t dim )
{
    for( int i = 0; i < dim; i++ )
    {
        if( v1[i] != v2[i] )
            return false;
    }

    return true;
}

int dotProduct( const int v1[], const int v2[], size_t dim )
{
    int sum = 0;

    for( int i = 0; i < dim; i++ )
    {
        sum += v1[i] * v2[i];
    }

    return sum;
}
