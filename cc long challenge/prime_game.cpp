#include<bits/stdc++.h>
using namespace std;
isprime(int n){
    for(int c=2;n<=c;c++){
        if(n%c==0)
        return false;
    }
    return true;
}
int main(){
    long long int t;
    cin>>t;
    int res=1;
    int cnt;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        for(int i=2;i<=x;i++){
            
            if(isprime(i))
            cnt++;

        }
        if(cnt>y)
        cout<<"Diyam"<<endl;
        else
        cout<<"Chef"<<endl;
    }
}