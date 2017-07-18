/*
 * MaxConsecutiveOnes.c
 *
 *  Created on: Jul 17, 2017
 *      Author: michael
 */

#include <stdio.h>
#include <stdlib.h>

int findMaxConsecutiveOnes(int* nums, int numsSize);

int main()
{
	//test case
	int numsSize = 6;
	int nums[6] = {1, 1, 0, 1, 1, 1};
	int result;

	result = findMaxConsecutiveOnes(nums, numsSize);

	//Print array to console for debugging
	printf("Here's your array: ");
	for(int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);

	}
	printf("\n");

	//print result
	printf("The maximum number of consecutive 1s is %d", result);

	return 0;
}

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
	int count = 0;
	int maxCount = 0;

	//1 1 0 1 1 1
	//x     x
	//  y       y

	for(int i = 0; i < numsSize; i++)
	{
		if(nums[i] == 1)
		{
			count++;
		}
		if(nums[i] == 0)
		{
			if(count > maxCount)
			{
			maxCount = count;
			}
			count = 0;
		}
	}
	if(count > maxCount)
	{
		maxCount = count;
	}
	return maxCount;
}
