#include<stdio.h>
#include<unistd.h>
int main()
{
    int ppid;
    ppid = getppid();
    printf("Process id is %d",ppid);
}

