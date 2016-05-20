#include <iostream>
#include <string>

#include "translate.h"

using namespace std;

int main()
{
    string ey = "Hello";
    cout << translate( ey ) << endl;

    ey = "Oi there";
    cout << translate( ey ) << endl;

    cout << translate( 2434 ) << endl;
    cout << translate( 442.34 ) << endl;
}
