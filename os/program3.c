#include<stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    pid = getpid();
    printf("Process id is %d",pid);
}

