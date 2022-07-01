#include<stdio.h>

int fibo(int n);
int main(){
    int n;
    scanf("%d",&n);
   int a=fibo(n);
    printf("nth fibo is :%d",a);
}

int fibo(int n){
    //base cndtn at which stop recurring
    if(n==0 || n==1){
        return n;// ie return 0 or 1
    }
    return fibo(n-1)+fibo(n-2);
}