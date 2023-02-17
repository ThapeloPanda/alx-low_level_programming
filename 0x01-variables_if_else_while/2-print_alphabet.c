/*
 * File: 2-print_alphabet.c
 * Auth: Thapelo Ramathetse
 */

#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	
	return (0);
}
