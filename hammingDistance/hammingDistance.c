/*
 * hammingDistance.c
 *
 *  Created on: Jul 17, 2017
 *      Author: Michael Goberling
 */


#include <stdio.h>
#include <stdlib.h>

int hammingDistance(int x, int y);

int main()
{

	int result = hammingDistance(0b0100, 0b0001);
	printf("The result is: %d", result);

	return 0;
}

int hammingDistance(int x, int y)
{
	int dist = 0;
	int XOR = x^y;


	printf("x value: %d\ny value: %d\n", x, y);

	for(int i = 0; i < 32; i++)
	{
		if(XOR & ( 1 << i))
		{
			dist++;
		}
	}
	return dist;

}
