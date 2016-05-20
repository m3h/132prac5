#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

#include "translate.h"

using namespace std;

bool strIsInt( string str );
bool strIsFloat( string str );
void convert( string word );

int main()
{
    string input;

    cout << "Enter a line of text below:" << endl;
    getline( cin, input );

    int currentWord = 0;
    int i = 0;
    for( i = 0; i < input.length(); i++ )
    {
        if( isalnum(input[i]) == false )
        {
            if( input[i] == '.' && isdigit(input[i-1]) && isdigit(input[i+1]) )
            {
                cout << "is float";
            }
            else
            {
                string word( input, currentWord, i - currentWord );
                convert( word );

                currentWord = i + 1;
                cout << input[i];
            }
        }
    }

    string word( input, currentWord, i + 1 - currentWord );
    if( word != "" )
    {

        cout << endl << "Word: " << word << endl;
        cout << translate( word );
    }

    cout << endl;

    cout << endl << "55 is a string: " << strIsInt( "55" ) << endl;
    return 0;
}

void convert( string word )
{
    if( word == "" )
    {
        return;
    }

    if( strIsInt( word ) )
    {
        cout << "is int?" << endl;
        cout << translate( atoi(word.c_str()) );
        return;
    }

    if( strIsFloat( word ) )
    {
        cout << translate( atof(word.c_str()) );
        return;
    }
    
    // is a string    
    cout << endl << "Word: " << word << endl;
    cout << translate( word );
}
bool strIsInt( string str )
{
    for( int i = 0; i < str.length(); i++ )
        if( !isdigit(str[i]) )
        {
            return false;
        }
    return true;
}
bool strIsFloat( string str )
{
    return false;
}
    /*
    sstream line;
    line << input;

    string here = "";

    while( line >> here )
    {
        for( int i = 0; i < here.length(); i++ )
        {
            if( here[i].isalpha == false )
            {
                if( here[i] == '.')
                {
                    if( i > 0 && i < here.length - 1 )  // check that the full stop is not at the beginning or the end
                    {
                        if( here[i-1].isdigit() && here[i+1].isdigit() )
                        {
                            continue;
                        }
                    }
                }

                cout << translate( here.substring( 0, here.length() - 1 ) );
*/
