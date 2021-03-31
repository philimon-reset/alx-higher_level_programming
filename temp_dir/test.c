#include <stdio.h>
#include <unistd.h>

int main()
{
    size_t pid;
    
    pid = getpip();
    printf("%d\n", pid)

    return 0;
}
