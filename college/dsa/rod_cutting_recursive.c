#include<stdio.h>

int max(int a,int b);
int rodCutting(int arr[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int p=rodCutting(arr,n);
    printf("%d",n);
}

int rodCutting(int arr[],int n){
    if(n==0)
        return 0;
    int q=-1;
    for(int i=1;i<n;i++)
        q=max(q,arr[i]+rodCutting(arr,n-i));
    return q;
}

int max(int a,int b){
    return (a>b)?a:b;
}