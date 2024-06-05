#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end)
{
	if(start >= end)
		return;

	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;

	reverseString(str, start + 1, end - 1);
}

int main()
{
	//char test[] = {"Hello this is C !!"};
	char test[] =  {"Google"};
	
	int length = strlen(test);
        printf("The printing the String Before Reverse :%s\n", test);
        reverseString(test, 0, length -1);
        printf("The printing the String After Reverse  :%s\n", test);

        return 0;
}

