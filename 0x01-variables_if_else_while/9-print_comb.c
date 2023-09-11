#include <stdio.h>
/**
 * main - the code
 * description: code that print all posiible combiation of a single digit
 * readind: starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int vas;

	for  (vas = 48; vas <= 57; vas++)
	{
		putchar(vas);
		if (vas < 57)
		{
			putchar(44);
			putchar(43);
		}
	}
	putchar('\n');
	return (0);
}
