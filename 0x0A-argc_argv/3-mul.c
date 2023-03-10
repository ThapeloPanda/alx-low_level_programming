#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: multiplies two numbers
 *
 * @argc: amount of arguments
 * @argv: arrays of arguments
 *
 * Return: 0 and result when successful, 1 and error when parameters not met
 */
int main(int argc, char *argv[])
{
	int i = argc - 1, j = i - 1; res;

	if (i == 2)
	{
		res = atoi(argv[i]) * atoi(argv[j]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
