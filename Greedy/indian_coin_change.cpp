//indian coin change problem
/* given an array of Denominations and a value X. You need to find the minimum number 
of coins required to make a value X.*/
//infinite supply of coin.
#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a,i<b;i++)
#define ff first
#define ss second
#define setBits(x) bu
using namespace std;
int main(){
int n;
cin>>n;
vi a(n);
rep(i,0,n)
cin>>a[i];
int x;
cin>>x;
sort(a.begin(),a.end(),greater<int>());
int ans=0;
for(int i=0;i<n;i++){
    ans+=x/a[i];
    x-=x/a[i]
}
}