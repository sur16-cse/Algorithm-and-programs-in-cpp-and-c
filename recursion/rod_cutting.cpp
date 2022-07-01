#include<bits/stdc++.h>
using namespace std;
int maxcuts(int n,int a,int b,int c){
    if(n<=0)
    return 0;
    int res=1+max(maxcuts(n-a,a,b,c),maxcuts(n-b,a,b,c),maxcuts(n-c,a,b,c));
    return res;
}
int main(){
int n,a,b,c;
cin>>n>>a>>b>>c;
cout<<maxcuts(n,a,b,c)<<endl;
}