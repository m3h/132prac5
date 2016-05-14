#include <iostream>
#include <string>
#include <cstddef>
#include <locale>
#include <iomanip>

#include "nameSort.h"

using namespace std;

string returnLower( string given )
{
    locale loc;
    string output = "";

    for( int i = 0; i < given.length(); ++i )
    {
        output += tolower( given[i], loc );
    }

    return output;
}

void sortParallel( string str[], string dependant[], size_t size )
{
}

//Function sorts by both surname and first name, but with surnames first    
void sortSurnameFirst(string surnames[], string firstnames[], size_t size)
{
    bool swap;
    string tempS, tempF;

    do
    {
        swap = false;
        for( int count = 0; count < (size - 1); ++count )
        {
            if( strcmp( returnLower( surnames[count] ), returnLower( surnames[count + 1]) ) > 0 )
            {
                
                tempS = surnames[count];
                tempF = firstnames[count];

                surnames[count] = surnames[count + 1];
                firstnames[count] = firstnames[count + 1];

                surnames[count + 1] = tempS;
                firstnames[count + 1] = tempF;

                swap = true;

            } else if( !strcmp( returnLower( surnames[count] ), returnLower( surnames[count + 1]) ) )
            {
                if( strcmp( returnLower( firstnames[count] ), returnLower( firstnames[count + 1])) > 0)
                {

                tempS = surnames[count];
                tempF = firstnames[count];

                surnames[count] = surnames[count + 1];
                firstnames[count] = firstnames[count + 1];

                surnames[count + 1] = tempS;
                firstnames[count + 1] = tempF;

                swap = true;
            }
        }
    } while (swap);
}

//Function sorts by both surname and first name, but with first names first
void sortFirstnameFirst(string surnames[], string firstnames[], size_t size)
{
    sortSurnameFirst( firstnames, surnames, size );
}

//Function displays the names in the array in the order in which they are stored
void displayNames(string surnames[], string firstnames[], size_t size)
{
    cout << left << setw(20) << "Surnames" << "First Names" << endl;
    for( int i = 0; i < 20; ++i )
        cout << "-";
    cout << endl;

    for( int i = 0; i < size; ++i )
    {
        cout << left << setw(20) << surnames[i] << firstnames[i] << endl;
    }
}
