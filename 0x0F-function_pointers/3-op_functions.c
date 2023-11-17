#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add
  * @x:
  * @y:
  *
  */
int op_add(int x, int y)
{
	return (x + y);
}

/**
  * op_sub 
  * @x:
  * @y:
  */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
  * op_mul
  * @x:
  * @y:
  *
  */
int op_mul(int x, int y)
{
	return (x * y);
}

/**
  * op_div 
  * @x:
  * @y:
  */
int op_div(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (x / y);
}

/**
  * op_mod 
  * @x:
  * @y:
  *
  */
int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (x % y);
}
