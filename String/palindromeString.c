/* 	A palindrome is a word, phrase or sentence that reads the same backward or forward. A string is said to be a palindromic string when we traverse it from start to end or end to start then we get the same result.
 *
 * 
 * */


#include <stdio.h>
#include <string.h>

void ispalindrome(char* str, int length)
{
	char rev_str[255];
	int flag = 1; // Start with the assumption that the string is a palindrome

	// Reverse the string
	for (int i = 0; i < length; i++)
	{
		rev_str[i] = str[length - i - 1];
	}
	rev_str[length] = '\0'; // Null-terminate the reversed string

	printf("The Reversed String: %s\n", rev_str);

	// Check if the string is a palindrome
	for (int i = 0; i < length; i++)
	{
		if (rev_str[i] != str[i])
		{
			flag = 0; // Set flag to 0 if a mismatch is found
			break;
		}
	}

	if (flag)
	{
		printf("The Given String is a palindrome: %s\n", str);
	}
	else
	{
		printf("The Given String is not a palindrome: %s\n", str);
	}
}

int main()
{
    char str[255];
    int length = 0;

    printf("Enter the String to Check:\n");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets, if present
    str[strcspn(str, "\n")] = '\0';

    printf("The Given String: %s\n", str);

    // Calculate the length of the string
    length = strlen(str);
    printf("The Length of the given String is %d\n", length);

    ispalindrome(str, length);

    return 0;
}

