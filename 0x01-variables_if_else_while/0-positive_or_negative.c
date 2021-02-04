#include <stdlib.h>
#include <time.h>
/**
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char a;
	if (n > 0) {
		a = 'positive';
			}
	else {
		a = 'negative';
	}
	printf("%d is %c,n,a")
	return (0);
}
