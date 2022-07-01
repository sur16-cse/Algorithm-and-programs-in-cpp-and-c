
#include<stdio.h>
#include<unistd.h>
int main()
{
    fork();
    printf("The PID is %d",getpid());
}

