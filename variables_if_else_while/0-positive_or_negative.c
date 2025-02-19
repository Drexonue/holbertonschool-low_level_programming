#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main -  program to prints a random number and to know if it's positive, negeative or equal to zero
 *
 *  Return : Always 0.
*/

int main(void)
{
		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
		printf("%d is postive\n", n); }
		else
		{
		if (n < 0)
		{
		printf("%d is negative\n", n); }
		else
		{
		printf("%d is zero\n", n);
		}}
		return (0);
}

