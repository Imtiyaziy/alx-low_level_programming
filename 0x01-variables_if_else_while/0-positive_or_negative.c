#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - display if number is positive | negative | zero
 *
 *Return: 0 and end program
*/
int main(void)
{
	int n;

	srand(time(0)); 
	n = rand() - RAND_MAX / 2;
	if (a > 0)
		printf("%d is positive\n", n);
	else if (a == 0)
		printf("%d is zero\n", n);
	else if ( a < 0 )
		printf("%d is negative\n", n);
	return (0);
}