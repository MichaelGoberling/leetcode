/*
 * reverseString.c
 *
 *  Created on: Jul 17, 2017
 *      Author: Michael Goberling
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s);

int main()
{
	char s[] = "hello";
	char* result;
	result = reverseString(s);

	printf("Here is your reversed string: ");
	for(int i = 0; i < strlen(result); i++)
	{
		printf("%c", result[i]);
	}
	printf("\n");

	return 0;
}

char* reverseString(char* s)
{
    int left;
    int right;
    char tempChar;

    left = 0;
    right = strlen(s) - 1;

    //start hello
    //      l   r
    //      -> <-

    //swap until l crosses r
    while(right > left)
    {
        tempChar = s[left];
        s[left] = s[right];
        s[right] = tempChar;
        right--;
        left++;
    }

    return s;
}
