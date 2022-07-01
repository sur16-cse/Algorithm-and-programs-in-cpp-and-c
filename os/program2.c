#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("In the parent process\n");
    //fflush(stdout);
    fork();
    printf("Hello\n");
}

