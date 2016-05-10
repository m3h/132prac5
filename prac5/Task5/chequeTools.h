/* DO NOT EDIT THIS HEADER FILE
*
* If you need to create and implement more functions, you should declare and
* implement such helper functions in the implementation file (chequeTools.cpp).
*/

#ifndef CHEQUE_TOOLS_H
#define CHEQUE_TOOLS_H
/**
*@brief	
*	Convert an integer number to a string representation of that number
*	If the number 9765 gets passed in, 
* 	return "Nine Thousand Seven Hundred and Sixty Five"
*@param amount 
*	The integer representation of the number. Will be > 0 and <= 10 000
*@return 
*	The string representation of the number
**/
string numToString(int amount);

/**
*@brief	
* 	Obtain the date from the system clock and return a string representation 
*        of the date. For the 6th of May 2016, "2015-06-05" should be returned.
*	
*	You should use a function in the ctime class to abtain the date and  use
*	the strftime function with the appropiriate specifier to format the date.
*@return 
*	The string representation of current date in the format YYYY-MM-DD.
**/
string getDate();

/**
*@brief	
*	Opens the file 'chequeFacts.txt'
*	Reads in the routing number, account number and cheque number
*	Assigns these values to the relevant reference variables.
*
*	It should also increment the cheque number and write it back to the file 
*	'chequeFacts.txt', along with the routing number and account number
*
*	The file will be in the format:
*	 Routing number\n
*	 Account number\n
*	 Cheque number\n
*@param routing 
*	Reference variable. Assign the routing number from the file to this variable
*	Should be 9 digits long
*@param account 
*	Reference variable. Assign the account number from the file in to this variable
*	Should be 14 digits long
*@param chequeNumber 
*	Reference variable. Assign the cheque number from the file in to this variable
*	Should be 5 digits long
**/
void getChequeFacts(string &routing, string &account, string &chequeNumber);

#endif
