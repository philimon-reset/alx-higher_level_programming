#include <stdio.h>
#include <unistd.h>

int main()
{
    unsigned int pid;
    
    pid = getpip();
    printf("%u\n", pid);

    return 0;
}
