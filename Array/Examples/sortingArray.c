#include<stdio.h>

int main()
{
    int array[7];
    int i = 0, j = 0, temp = 0;
    size_t  n = sizeof(array) / sizeof(array[0]);
    printf("Enter the Elements for Array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The Elemenst before sorting the Array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    for(i =0; i < n ; i++)
    {
        for(j=i+1; j < n; j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("The Array after sorting :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    return 0;
}