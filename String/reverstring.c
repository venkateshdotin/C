#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
	int length = strlen(str);
	int mid  = length / 2;
	char temp;
	for(int i = 0; i < mid ; i++)
	{
		temp =  str[i];
		str[i] =  str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

int main()
{
	char test[] = {"Hello this is C !!"};
	//char test[] =  {"Google"};
	printf("The printing the String Before Reverse :%s\n", test);
	reverseString(test);
	printf("The printing the String After Reverse  :%s\n", test);

	return 0;
}
