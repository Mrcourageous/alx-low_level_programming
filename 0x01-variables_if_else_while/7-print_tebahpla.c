#include <stdio.h>
/**
 * main - the code 
 * the code that print the alphabet in lowercase with revevrse followd by a new line
 * Return: 0
 */
int main(void)
{
	char man;

	for (man = 'z'; man >= 'a'; man--)
	{
		putchar(man);
	}
	putchar('\n');
	return (0);
}
