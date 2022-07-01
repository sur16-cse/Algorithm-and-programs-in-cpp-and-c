
#include<stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    pid=fork();
    if(pid>0)
    printf("The PID is %d",pid);
}

