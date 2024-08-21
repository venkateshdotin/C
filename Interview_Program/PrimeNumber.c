/*To Check the Given number is Prime or Not*/
#include <stdio.h>
#include <stdbool.h>

bool Ischeck(int num)
{
	if(num <= 1)
		return false;
	if(num == 2)
		return true;
	if(num % 2 == 0)
		return false;
	for(int i =3; i<= num/2;i++)
	{
		if(num % i == 0)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	int num;
	printf("Enter the number to check is prime or Not :\n");
	scanf("%d", &num);
    
	if(Ischeck(num))
	{
		printf("The given number is prime number :%d\n", num);
	}
	else
	{
		printf("The given number is Not a prime number :%d\n", num);
	}
	
	return 0;
}
