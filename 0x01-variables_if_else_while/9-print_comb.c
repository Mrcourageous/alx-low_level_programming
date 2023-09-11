#include <stdio.h>
/**
 * main - the code
 * the code that print all posiible combination of a single digit
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
			/**putchar(32);*/
		}
	}
	putchar('\n');
	return (0);
}
