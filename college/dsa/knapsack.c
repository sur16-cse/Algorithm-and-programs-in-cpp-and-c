#include<stdio.h>

int max(int a,int b){
    return(a>b)?a:b;
}

int knapSack(int val[],int wt[],int c,int n){
    int K[n+1][c+1];
    for(int i=0;i<=n;i++){
        for(int w=0;w<=c;w++)
        {
            if(i==0 || w==0)
                K[i][w]=0;
            else if(wt[i-1]<=c)
                K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
            else
                K[i][w]=K[i-1][w];
        }
    }
    return K[n][c];
}
int main(){
    int n;
    scanf("%d",&n);
    int val[n];
    int  wt[n];
    for(int i=0;i<n;i++)
        scanf("%d",&val[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&wt[i]);
    int c;
        scanf("%d",&c);
    int max_val=knapSack(val,wt,c,n);
    printf("%d",max_val);
}