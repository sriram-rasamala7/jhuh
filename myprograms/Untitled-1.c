#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    fork();
    fork();
    printf("the pid is:%d",getpid());

    return 0;
}
