/*  fgets()
 *  The fgets() reads a lie from the specified stream annd stores it into the string pointed to by str. it stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, ehichever come first.
 *
 *  Syntax:: char *fgets (char *str, int n, FILE *stream);
 *
 *  Parameters:
 *  @str: Pointer to an array of chars where the string read is copied.
 *  @n: Maximum number of characters to be copied into str(including the terminating null character).
 *  @ *stream: Pointer to a FILE object that identifies an input stream.
 *
 *  NOTE:: stdin can be used as argument to read from the standard input.
 *
 *  Return Value --> The fgets() function returns a pointer to the string where the input is stored.
 *
 * Features of fgets()
 *  -> it follows some parameters such as MAximum length, buffer, and input device refernce.
 *  -> it is safe to use because it checks the array bound..
 *  -> it keeps on reading until a new line character is encountered or the maximum limit of the character array.
 *   
 * */

#include <stdio.h>
#include <string.h>

#define MAX 255

int main()
{
	char str [MAX];
	printf("Enter the string :\n");
	fgets(str, MAX, stdin);

	int length = strlen(str);
	printf("The Given String is :: %s :: and length is : %d\n", str,length);

	return 0;
}
