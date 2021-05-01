#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int len;
	char *argv[] = {"/bin/ls", "-l', ""/usr", NULL};

	printf("before exec");
	if (execve(argv[0], argv, NULL) == -1)
	{
		printf("no");
	}
	printf("after exec");
	return (0);
}
