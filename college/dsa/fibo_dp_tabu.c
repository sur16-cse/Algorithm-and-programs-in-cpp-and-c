#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    scanf("%d",&n);
   printf("%d",fibonacci(n));
}

int fibonacci(int n){
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}