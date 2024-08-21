/* write a Pattern Program as Mention below :
*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main()
{
	int n;
	int i, j;
	printf("Enter the number of Rows:\n");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
