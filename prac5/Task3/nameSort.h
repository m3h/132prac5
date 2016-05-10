/************************************************
	Header file for funcion definitions
************************************************/
#ifndef NAME_SORT_H
#define NAME_SORT_H

//Function sorts by both surname and first name, but with surnames first	
void sortSurnameFirst(string surnames[], string firstnames[], size_t size);

//Function sorts by both surname and first name, but with first names first
void sortFirstnameFirst(string surnames[], string firstnames[], size_t size);

//Function displays the names in the array in the order in which they are stored
void displayNames(string surnames[], string firstnames[], size_t size);


#endif