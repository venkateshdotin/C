/* To find a Largest Element in the Array and Second largest Element in the Array.
 * */

#include <stdio.h>

int main()
{
        int size, i, largest, seclargest, temp;
        printf("Enter the size of the array: ");
        
	scanf("%d", &size);
        int array[size];  //Declaring array
        
	printf("Enter the Elements in Array: \n");
        for(i = 0; i < size; i++)
        {
                scanf("%d", &array[i]);
        }
        
	printf("Printing the Elements in Array: \n");
        for(i = 0; i < size; i++)
        {
                printf("%d\t", array[i]);
        }
        printf("\n");
	
	largest = array[0];
	seclargest = array[1];
	if(largest < seclargest)
	{
		temp = largest;
		largest = seclargest;
		seclargest = temp;
	}
	
	for(i = 2; i < size; i++)
	{
		if(array[i] > largest)
		{
			seclargest = largest;
			largest = array[i];
		}
		else if(array[i] > seclargest && array[i] != largest)
		{
			seclargest = array[i];
		}
	}
	
        printf("Largest number in the Elements in the Array: %d\n", largest);
	printf("Second Largest number in the Elements in the Array: %d\n", seclargest);


        return 0;
}

