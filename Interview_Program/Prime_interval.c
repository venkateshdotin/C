/* To Print the prime number in the two Interval */

#include <stdio.h>

int main()
{
	int start,end, i, j, flag = 0;
	printf("Enter the start and end range to print:\n");
	scanf("%d%d",&start,&end);
	
	for(i =  start; i <= end; i++)
	{
		flag = 0;
		for(j = 2; j <= i/2; j++)
		{
			if(i % j == 0)
			{
				flag = 1;
			}
		}
		if(flag == 0)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}


#if 0
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= num / 2; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    
    printf("Enter the start and end range to print prime numbers:\n");
    scanf("%d%d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

#endif
