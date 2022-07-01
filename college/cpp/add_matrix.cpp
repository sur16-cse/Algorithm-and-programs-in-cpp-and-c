#include<bits/stdc++.h>
using namespace std;
#define  M 3
#define  N 3
class Solution {
  public:
    void sumOfMatrix(int A[][N],int B[][N],int C[][N]){
    for(int i=0;i<N;i++)
          for(int j=0;j<M;j++)
           C[i][j]=A[i][j]+B[i][j];
    }
   void show(int A[][N],int B[][N],int C[][N]){
    for(int i=0;i<N;i++){
          for(int j=0;j<M;j++){
           cout<<C[i][j]<<" ";
           }
           cout<<endl;
   }
   }
};

int main() {
        int A[N][M],B[N][M],C[N][M];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> B[i][j];

        Solution ob;
         ob.sumOfMatrix(A,B,C) ;
         ob.show(A,B,C);
}