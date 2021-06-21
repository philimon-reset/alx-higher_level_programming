#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>
int infinite_while(void);

int main()
{
	int n = 0;

	while (n < 6)
	{
		if (fork() != 0)
			printf("Zombie process created, PID: %d\n", getpid());
		n++;
	}
	infinite_while();
	return (0);
}

/**
 * infinite_while - indefinite while loop
 *
 * Return: void function
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
