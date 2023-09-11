#include <stdio.h>
/**
 * main - the code for lowercase
 * How to print lowercase and uppercase using putchar
 * Return: 0
 */
int main(void)
{
	char modupe;

	for (modupe = 'a'; modupe <= 'z'; modupe++)
	{
		putchar(modupe);
	}
	for (modupe = 'A'; modupe <= 'Z'; modupe++)
	{
		putchar(modupe);
	}
	putchar('\n');
	return (0);
}
