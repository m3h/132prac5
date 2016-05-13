#include <iostream>
#include <vector>
#include <algorithm>
#include <valarray>

#include "numberArray.h"

using namespace std;

void reverseOrder( int arr[], size_t size )
{

    int temp[size];

    for( int i = 0; i < size; i++ )
    {
        temp[i] = arr[i];
    }

    for( int i = 0; i < size; i++ )
    {
        arr[i] = temp[ size - 1 - i ];
    }

    /*int temp;
    temp = arr[0];
    arr[0] = arr[1];*/


}

void rotate( int arr[], size_t size, int dist = 0 )
{
    if( dist == 0 )
        return;

    vector<int> tempVec;

    for( int i = 0; i < size; i++ )
    {
        tempVec.push_back( arr[i] );
    }

    if( dist > 0 )
    {
        while( size - dist > size )
        {
              dist -= size;;
         }
    } else
    {
        while( -dist > size )
        {
            dist += size;
        }
    }
    if( dist > 0 )
    {
        rotate( tempVec.begin(), tempVec.end() - dist, tempVec.end() );
    } else if( dist < 0 )
    {
        rotate( tempVec.begin(), tempVec.begin() - dist, tempVec.end() );
    }

    for( int i = 0; i < size; i++ )
    {
        arr[i] = tempVec[i];
    }

    /*
    int temp[size];
    int correctional = dist;
    int pos;

    if( dist == 0 )
        return;

    for( int i = 0; i < dist; i++ )
    {
        int temp1;
        for( int j = 0; j < size; j++ )
        {
            if( j - 1 < 0 )
            {
                temp1 = arr[ size - 1 ];
                arr[size - 1] = arr[j];
                arr[j] = temp1;
            } else
            {
                temp1 = arr[ j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp1;
            }
        }
    } */
 //   else if( dist > 0 )
  //  {
        /*for( int i = 0; i < size; i++ )
        {

            if( (i - dist + (correctional * size) ) > (size - 1) )
            {cout << "correctional gets 0";
                correctional = 0;
            }
            while( ( i - dist + correctional * size ) < 0 )
            {
                cout << correctional;
                ++correctional;
                cout << correctional;
            }

            cout << i << ": " << arr[i - dist + correctional * size] << " " << correctional << endl;
            temp[i] = arr[i - dist + correctional * size];
        }
    } else if( dist < 0 )
    {
        for( int i = 0; i < size; i++ )
        {
            while( ( i - dist - correctional * size ) > size - 1 )
                ++correctional;

            if( (i - dist - correctional * size ) < 0 )
                correctional = 0;
            
            temp[i] = arr[ i - dist - correctional * size ];
        }
    }

    for( int i = 0; i < size; i++ )
    {
        arr[i] = temp[i];
    }*/
/*    for (int i = 0; i <size -1; i++)
    {
        temp [i] = arr[i];
    }
   for (int i = 0; i < size-1; i++)
   {
        if ( i-dist <0)
        {
            pos = size - (dist - i);
        }
        else 
        {
            pos = i-dist;
        }   

        arr [pos] = temp[i]; 
   } 
*/
}

bool shift( int array[], size_t size, int startInd, int stopInd, int dist = 0 )
{
    if( startInd > stopInd )
        return false;


    if( dist == 0 )
        return true;

    valarray<int> temp( array, size );

    temp.shift( -dist );

    for( int i = startInd; i <= stopInd; i++ )
    {
        if( i + dist >= 0 && i + dist < size - 1 )
            array[ i + dist ] = temp[i];
    }

    return true;

}

void displayArray( int arr[], size_t size )
{
    cout << "[";

    int i;
    for( i = 0; i < size - 1; i++ )
    {
        cout << arr[i] << ", ";
    }
    cout << arr[i] << "]";

    return;
}
