/*To perform a division operation for two numbers using the bitwise operator.
 * 
 * */

#include <stdio.h>

int isDivision(int num1,int num2)
{
	int res = 0;
	while(num1 >= num2)
	{
		num1 = num1 - num2;
		res++;
	}
	return res;
}

int main()
{
	int number1,number2, result;
	printf("Enter two number:\n");
	scanf("%d%d", &number1, &number2);
	result = isDivision(number1, number2);
	printf("The Division of two number :%d %d is : %d\n", number1, number2, result);

	return 0;
}
