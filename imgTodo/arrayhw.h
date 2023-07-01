#ifndef ARRAYHW_H_INCLUDED
#define ARRAYHW_H_INCLUDED

/* Fills array with random values.
*  Precondition:
*		'a' is a reference to an integer array
*		'n' is the array length
*  
*  Postcondition: 
*		Elements in the index range : [0, n - 1]
*		are overwritten with random values
*/

void fillArray(int a[], int n);

/* Prints the array values
*  Precondition:
*		'a' is a reference to an integer array
*		'n' is the array length
*
*  Postcondition:
*		Elements with index 0 to n-1 are written to
*		the standard output stream.
*/

void printArray(const int a[], int n);

#endif