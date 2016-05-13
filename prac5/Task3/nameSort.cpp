#include <string>
#include <locale>
#include <cstddef>

#include "nameSort.h"

using namespace std;

//Function sorts by both surname and first name, but with surnames first    
void sortSurnameFirst(string surnames[], string firstnames[], size_t size)
{
    bool swap;

    int tempSurname, tempFirstname;
    
    locale loc;

    do
    {
        swap = false;
        for( int count = 0; count < size - 1; count++ )
        {
            if( surnames[count] > surnames[count + 1] )
            {
                tempSurname = surnames[count];
                tempFirstname = firstnames[count];

                surnames[count] = surnames[count + 1];
                firstnames[count] = firstnames[count + 1];

                surnames[count + 1] = tempSurname;
                firstnames[count + 1] = tempFirstname;

                swap = true;
            }
        }
    } while (swap);

}
//Function sorts by both surname and first name, but with first names first
void sortFirstnameFirst(string surnames[], string firstnames[], size_t size)
{
    return;
}

//Function displays the names in the array in the order in which they are stored
void displayNames(string surnames[], string firstnames[], size_t size)
{
    return;
}
