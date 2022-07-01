#include<stdio.h>
#include<limits.h>
int MatrixChainMul(int a[],int n){
    int m[n][n];
    int q,j,i,L,k;
    for(i=1;i<n;i++)
        m[i][i]=0;

    for( L=2;L<n;L++){
        for( i=1;i<n-L+1;i++){
            j=i+L-1;
            m[i][j]=INT_MAX;
            for( k=i;k<=j-1;k++){
                q=m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j];
                if(q<m[i][j])
                    m[i][j]=q;
            }
        }
    }
    return m[1][n-1];   
}

int main(){
    int n;
     scanf("%d",&n);
    int a[n];
     for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    int minm=MatrixChainMul(a,n);
    printf("Minimum number of multiplication is %d",minm);
}