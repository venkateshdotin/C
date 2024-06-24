#include <stdio.h>
#include <string.h>

int lengthString(char *str)
{
        int length = 0, i = 0;
        while (str[i] != '\0')
        {
                length++;
                i++;
        }
        return length;
}

int main()
{
        char str[100] = "This is C Programming!";
        int result = 0;
        
        printf("The Original String: %s\n", str);

        result = lengthString(str);
        printf("The Length of the string: %d\n", result);

        return 0;
}
