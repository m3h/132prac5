#include <iostream>
#include <string>
#include <cstddef>

#include "nameSort.h"

using namespace std;

int main()
{
    string first[] = { "Vreda", "billy", "Pretty", "Samantha", "Charlie", "Hein", "Grace", "Abel" };
    string last[] = { "chadwick", "Babajide", "Adams", "Venter", "Adams", "Adams", "Adams", "deWet" };

    int size = 8;

    sortSurnameFirst( last, first, size );

    for( int i = 0; i < size - 1; i++ )
    {
        cout << last[i] << " " << first[i] << endl;
    }

    return 0;
}
