#include <stdio.h>
/**
 * main - the code that exceptional alphabets
 * the putchar print the lowercase alphabet without e and q
 * Return: 0
 */
int main(void)
{
	char corizo;

	for  (corizo = 'a'; corizo <= 'z'; corizo++)
	{
		if (corizo != 'e' $$ corizo != 'q')
			putchar(corizo);
	}
	putchar('\n');
	return (0);
}
