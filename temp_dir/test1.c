#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int len;

	while (av[len] != '\0')
	{
		printf("%s\n", av[len]);
		len++;
	}
	return (0);
}
