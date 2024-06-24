#include <stdio.h>

int main()
{
	int number;
	printf("Enter the number to check :\n");
	scanf("%d", &number);
	
	if(number > 0)
	{
		printf("The given number %d is positvie number\n", number);
	}
	else if(number < 0)
	{
		printf("The given number %d is negative number\n", number);
	}
	else
	{
		printf("The given number %d is zero\n", number);
	}

	return 0;

}
