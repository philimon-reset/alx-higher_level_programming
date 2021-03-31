#include <stdio.h>
#include <unistd.h>

int main()
{
    size_t pid;
    
    pid = getpip();
    printf("%u\n", pid);

    return 0;
}
