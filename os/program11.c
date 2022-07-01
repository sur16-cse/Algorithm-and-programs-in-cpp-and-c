#include<stdio.h>
#include<unistd.h>

int main(){
    if(fork()>0)
    {
        printf("parent");
        sleep(50);
    }
}