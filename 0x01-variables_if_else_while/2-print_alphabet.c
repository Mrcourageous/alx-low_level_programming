#include <stdio.h>
/**
 * main - The code for block
 * the code to print alphabets in lowlowercase using putchar
 * Return: Always 0 success
 */
int main(void)
{
	char modupe;

	for (modupe = 'a'; modupe <= 'z'; modupe++)
	{
		putchar(modupe);
	}
	putchar('\n');
	return (0);
}
