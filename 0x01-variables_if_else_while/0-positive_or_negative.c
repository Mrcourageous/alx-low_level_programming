#include <stdio.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
	
	if (n > 0)
	{
		printf("positive");
	} else if (n == 0);
	
	{
		printf("zero");
	} else {
		printf("negative");
	}
	printf("\n");
	
	return 0;
}
		
