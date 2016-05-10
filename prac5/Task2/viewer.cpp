#include <iostream>
#include <string> 
#include <fstream> 
#include "numberArray.h"

using namespace std ;

bool readFile(int[], size_t& , string);

int main()
{
	int myArray[200];
	size_t size = 0;
	string fileName;
	
	cout << "Enter the file name: " ;
	cin >> fileName; 

	if (!(readFile(myArray, size, fileName)))
	{
		cout << fileName << " could not be opened" << endl;
		return 0;
	}
	
	cout << "Numbers read in are: " ;
	displayArray(myArray,size) ;
	cout << "\n" ;

	int choice = 0;
	int distance = 0 ;
	int start = 0 ;
	int stop = 0 ;
	
	while(choice != 9)
	{

		cout << "\n1 - Reverse Array" << endl ;
		cout << "2 - Rotate Array" << endl ;
		cout << "3 - Shift Array" << endl ;
		cout << "Please enter a number(1-3) or enter 9 to exit: " ;
		cin >> choice  ;

		switch(choice)
		{
			case 1:
				reverseOrder(myArray,size) ;
				cout << "After operation number 1: \nArray = " ;
				displayArray(myArray,size) ;
				break ;
			case 2:
				cout << "Please enter a distance: " ;
				cin >> distance ;
				rotate(myArray,size,distance) ;
				cout <<"After operation number 2: \nArray = "  ;
				displayArray(myArray,size) ;
				break ;
			case 3:
				cout << "Please enter a distance: " ;
				cin >> distance ;
				cout << "Please enter a start index: " ;
				cin >> start ;
				cout << "Please enter a stop index: " ;
				cin >> stop ;
				if(shift(myArray,size,start,stop,distance)) 
				{
					cout <<"After operation number 3: \nArray = " ;
					displayArray(myArray,size) ;
				}
				else
				{
					cout << "\nInvalid parameters entered\n" ;
				}
				break ;
			case  9:
				cout << "GOODBYE!\n";
				break ;
			default:
				cout << "\nInvalid option entered. Please try again \n" ;

		}
	}
	
	return 0;
}

bool readFile(int arr[], size_t& size, string inputFileName)
{
	ifstream inputFile;
	inputFile.open(inputFileName);
	if(!inputFile)
	{
		return false;
	}
	else
	{
		size_t count = 0 ;
		string temp;
		while(!(inputFile.eof()))
		{
			getline(inputFile,temp) ;
			arr[count] = stoi(temp);
			count++ ;
		}
		size = count ;
		inputFile.close();
		return true;
	}
} 
