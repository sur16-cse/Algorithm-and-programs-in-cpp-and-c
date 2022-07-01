#include<stdio.h>
int fibonacci(int n);
int lookup[100]={0};
int main(){
    int n;
    scanf("%d",&n);
   printf("%d",fibonacci(n));
    printf("\n");
   for(int i=0;i<=n;i++){
        printf("%d ",lookup[i]);
   }
    printf("\n");
}

int fibonacci(int n){
    if(lookup[n]==0){
        if(n<=1)
            lookup[n]=n;
        else
            lookup[n]=fibonacci(n-1)+fibonacci(n-2);
    }
    
        return lookup[n];
}

