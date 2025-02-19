#include <stdio.h>

/**
 * main - Entry main
 *
 * Return: Always 0
*/

int main(void)
{
	int alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt == 'q' || alphabt == 'e')
		{
			continue;
		}
		putchar(alphabt);
	}
	putchar('\n');
	return (0);
}


