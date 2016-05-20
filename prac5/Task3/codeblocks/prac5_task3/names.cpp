#include <iostream>
#include <fstream>
#include <string>

#include "nameSort.h"

using namespace std;

int main()
{
    string str1[200];
    string str2[200];

    int size;

    ifstream names("names.txt");
    if( !names )
    {
        cout << "Error opening names.txt! Terminating..." << endl;
        return 0;
    }

    for( int count = 0; names; size = ++count )
    {
        names >> str1[count];
        names >> str2[count];
    }
    names.close();

    cout << "Names Sorting" << endl;
    cout << "-------------" << endl;

    cout << "1. Sort names by surnames then first names" << endl;
    cout << "2. Sort names by first names then surnames" << endl;
    cout << "Enter your sorting choice: ";

    int input;
    cin >> input;

    switch( input )
    {
        case 1:
        cout << "The sorted names by surnames then first names are:" << endl;
        sortSurnameFirst( str1, str2, size );
        displayNames( str1, str2, size);
        break;

        case 2:
        cout << "The sorted names by first names then surnames are:" << endl;
        sortFirstnameFirst( str1, str2, size );
        displayNames( str1, str2, size );
        break;

        default:
        cout << "Fuck" << endl;
        break;
    }

    return 0;
}
