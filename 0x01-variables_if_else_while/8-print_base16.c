#include <stdio.h>
/**
 * main - the code
 * the code that print a base 16 with a new line
 * Return: 0
 */
int main(void)
{
	int oracle;
	char vim;

	for (oracle = 48; oracle < 58; oracle++)
	{
		putchar(oracle);
	}
	for (vim = 'a'; vim <= 'f'; vim++)
	{
		putchar(vim);
	}
	putchar('\n');
	return (0);
}
