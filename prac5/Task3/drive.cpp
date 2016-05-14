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

    displayNames( last, first, size );
    return 0;
}
