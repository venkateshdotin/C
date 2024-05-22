#include<stdio.h>

int sumofElements(int array[], int n)
{
    int i = 0, sum = 0;
    for(i = 0 ;i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int array[5];
    int total = 0;
    size_t n = sizeof(array)/sizeof(array[0]);
    printf("Enter the numbers for Array:\n");
    for(int i= 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    total = sumofElements(array,n);
    printf("Sum of the Elements : %d\n", total);

    return 0;
}