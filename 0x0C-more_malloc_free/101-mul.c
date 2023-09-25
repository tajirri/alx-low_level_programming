#include "main.h"

/**
 * main - multiplies two positive numbers
 * @agc: n arguments
 * @ags: args
 * Return: int
 */
int main(int agc, char *ags[])
{
unsigned long mul;
int i, j;
	if (agc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < agc; i++)
	{
		for (j = 0; ags[i][j] != '\0'; j++)
		{
			if (ags[i][j] > 57 || ags[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(ags[1]) *  atol(ags[2]);
	printf("%lu\n", mul);
return (0);
}
