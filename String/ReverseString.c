#include <stdio.h>
#include <string.h>

void stringReverse(char *str)
{
        int len = strlen(str);  // Get the length of the string
        int j = len - 1;        // Adjust for 0-based index
        int i = 0;
        printf("The length of the String :%d\n", len); // Print the actual length of the string
        char temp;
        while(i < j)
        {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
                i++;
                j--;
        }
        printf("The After String Reverse :%s\n", str);
}

int main()
{
        char str[] = "Hello World!!";
        printf("The original String is :%s\n", str);
        stringReverse(str);

        return 0;
}

