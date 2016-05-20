#include <cstdlib>
#include <sstream>


#include "translate.h"

using namespace std;

bool isVowel( char c )
{
    switch( c )
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
            break;
    }

    return false;
}
string translate( const string& word )
{
    string result = word;
    if( isVowel( result[0] ) )
    {
        ;// do nothing
    } else
    {
        result += result[0];
        result.erase( 0, 1 );
    }

    result.append( "OB" );

    return result;
}

string translate( int number )
{
    string result;

    result = "" ;

    stringstream ss;
    ss << number/61;
    result += ss.str();

    result += "." ;

    ss.str("");
    ss << number%61;
    
    string temp;
    temp = ss.str();
    temp = temp.substr(1, temp.length() );
    result += temp;

    return result;
}

string translate( double number )
{
    string result;

    int x;
    double y;

    x = static_cast<int>(number);
    y = number - static_cast<int>(number);

    stringstream ss;
    ss << x / 61 + y;
    result += ss.str();

    return result;
}
