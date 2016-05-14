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

    string temp;
    for( int i = 0; names >> temp; i++ )
    {
        if( i % 2 == 0)
        { cout  << "str1: " << temp << "|" << endl;
            str1[i] = temp;
        } else
        {   cout  << "str2: " << temp << "|" << endl;
            str2[i] = temp;
        }
        size = i;
    }

    cout << "Names Sorting" << endl;
    cout << "-------------" << endl;

    cout << "1. Sort names by surnames then first names" << endl;
    cout << "2. Sort names by first names then surnames" << endl;
    cout << "Enter your sorting choice: ";

    int input;
    cin >> input;

    cout << "The sorted names by surnames then first names are:" << endl;
    displayNames( str1, str2, size);
    for( int i = 0; i < 8; i++ )
    {
        cout << str1[i].size() << " ";}
    string first[] = { "Vreda", "billy", "Pretty", "Samantha", "Charlie", "Hein", "Grace", "Abel" };
    string last[] = { "chadwick", "Babajide", "Adams", "Venter", "Adams", "Adams", "Adams", "deWet" };
    displayNames( first, last, 8);
    return 0;
}
