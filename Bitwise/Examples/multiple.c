/* To multiple the Two given number using Bitwise Operator.
 *
 * */

#include <stdio.h>

int isMultiple(int num1, int num2)
{
	int sum = 0;
	while(num2 != 0)
	{
		if(num2 & 1)
			sum += num1;
		num1 = num1 << 1;
		num2 = num2 >> 1;
	}
	return sum;
}

int main()
{
	int number1,number2,result;
	printf("Enter two number :\n");
	scanf("%d%d", &number1, &number2);
	result = isMultiple(number1, number2);
	printf("The multiple of two number %d %d is : %d.\n", number1,number2,result);

	return 0;
}
