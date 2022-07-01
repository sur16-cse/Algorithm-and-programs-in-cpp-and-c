#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
    int pid;
    pid=fork();
    if(pid==0){
        printf("In child process\n");
    }
    else{
        wait(0);
        printf("parent process\n");
    }
}