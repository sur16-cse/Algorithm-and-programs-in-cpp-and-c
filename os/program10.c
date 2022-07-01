#include<stdio.h>
#include<unistd.h>

int main(){
    int pid;
    pid=fork();
    if(pid==0){
        printf("if child process id is %d\n",getpid());
        printf("if parent process id is %d\n",getppid());
        sleep(20);
        printf(" sleep child process id is %d\n",getpid());
        printf("sleep parent process id is %d\n",getppid());
    }
    else{
        printf("else parent process id is %d\n",getpid());
        printf("else the parent process id is %d\n",getppid());
    }
}
