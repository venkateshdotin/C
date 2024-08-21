#include <stdio.h>

int searchstring(char *str, char *substr)
{
	int i,j;
	for(i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; substr[j] != '\0'; j++)
		{
			if(str[i+j] != substr[j])
			{
				break;
			}
		}
		if(substr[j] == '\0')
		{
			return 0;
		}
	}
	return -1;
}

int main()
{
	char str[] = "hello World";
	char substr[] = "World";
	int result = searchstring(str, substr);
	if(result == 0)
	{
		printf("Substring found :\n");
	}
	else
	{
		printf("Substring not founf :\n");
	}

	return 0;
}
