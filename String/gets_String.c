/*  gets()
 *  Reads characters from the standard input (stdin) and stores them as a C String into str until a newline character or the end-of-file is reached.
 *  1. It is not safe to use because it does not check the array bound.
 *  2. It used to read strings from the user until a newline character is not encountered.
 *  Syntax ::  " char *gets(char *str);
 *
 *  parameters:
 *  @str : Pointer to a block of memory (array of char) where the string read is copied as a C String.
 *  
 *  Return Value : This function return a pointer to the string where input is stroed.
 *
 * */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Enter the string :\n");
	gets(str);

	printf("The Recieved String :%s\n", str);

	return 0;
}
