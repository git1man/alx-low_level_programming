#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d the value is posative \n")
	}
	else if (n == 0)
	{
		prinrf("%d the value is equal to zero \n")
	}
	else
	{
		printf("%d the value is negative \n")
	}
	return (0);
}
