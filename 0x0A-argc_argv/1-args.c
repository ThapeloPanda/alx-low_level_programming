#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of arguments passed to the program
 *
 * Description: prints the name of the function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
