#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cs=0,ms=0;
    //kadane's algorithm
    for(int i=0;i<n;i++){
        cs=cs+a[i];
        if(cs<0)
        cs=0;
        ms=max(cs,ms);
    }
    cout<<"maxmsum"<<ms<<endl;
}