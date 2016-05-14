#include <iostream>
#include <string>
#include <cstring>
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

void sortParallel( string str1[], string str2[], size_t size )
{
    string temp1 = "";
    string temp2 = "";


    for (int i = 0; i < size ; i++) {
       for (int j = 1; j < (size - i); j++) {

            if ( strcmp( returnLower(str1[j - 1]).c_str(), returnLower(str1[j]).c_str() ) > 0) {
               temp1 = str1[j - 1];
               temp2 = str2[j - 1];

               str1[j - 1] = str1[j];
               str2[j - 1] = str2[j];

               str1[j] = temp1;
               str2[j] = temp2;
            }

            if( strcmp( returnLower(str1[j - 1]).c_str(), returnLower(str1[j]).c_str() ) == 0) {
                if( strcmp( returnLower(str2[j - 1]).c_str(), returnLower(str2[j]).c_str() ) > 0) {
                    temp1 = str1[j - 1];
                    temp2 = str2[j - 1];

                    str1[j - 1] = str1[j];
                    str2[j - 1] = str2[j];

                    str1[j] = temp1;
                    str2[j] = temp2;
                }
            }

        }
    }
}

//Function sorts by both surname and first name, but with surnames first
void sortSurnameFirst(string surnames[], string firstnames[], size_t size)
{
    sortParallel( surnames, firstnames, size );
}

//Function sorts by both surname and first name, but with first names first
void sortFirstnameFirst(string surnames[], string firstnames[], size_t size)
{
    sortParallel( firstnames, surnames, size );
}

//Function displays the names in the array in the order in which they are stored
void displayNames(string surnames[], string firstnames[], size_t size)
{
    cout << left << setw(20) << "Surnames" << "First Names" << endl;
    for( int i = 0; i < 40; ++i )
        cout << "-";
    cout << endl;

    for( int i = 0; i < size; ++i )
    {
        cout << left << setw(20) << surnames[i] << firstnames[i] << endl;
    }
}
