#include<bits/stdc++.h>
using namespace std;
long long int removeduplicates(long long int a[],long long int n){
int j=0;
for(int i=0;i<n;i++){
    if(a[i]!=a[i+1])
    a[j++]=a[i];
}
a[j++]=a[n-1];
return j;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
       n=removeduplicates(a,n);
       int max=0;
       for(int i=0;i<n;i++){
        max=abs(a[0]-a[1])+abs(a[1]-a[2])+abs(a[2]-a[0]);
       }
       cout<<max<<endl;
    }
}