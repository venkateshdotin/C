/* Sum of digits of a Number in C
 *
 * 	Sum of Digits of a Number in C we will allow the user to enter any number and then we will divide the number into individual digits and add 
 * 	those individuals (sum=sum+digit) digits using Loop. 
 * 	Ex:-  number is 231456
 * 	2 + 3 + 1 + 4 + 5 + 6 = 21
 * 	Sum of digit of a given number is 21
 * */

#include <stdio.h>

int main()
{
	int number, temp, rem;
	int sum  = 0;
	printf("Enter the Number to Sum of Digits of the Given number.\n");
	scanf("%d", &number);

	temp = number;
	while(temp > 0)
	{
		rem = temp % 10;
		sum = sum + rem;
		temp = temp / 10;
	}

	printf("The %d Sum of Digits of a Number is : %d.\n", number, sum);

	return 0;
}
