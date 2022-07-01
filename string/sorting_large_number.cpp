//Given an array A of size n.
//sort array in ascending order
//1<=n<=10^6;
//1<=Ai<=10^1000
//for this it is above than long long range so we have only option to use 
//string .
#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
//both number same then return in lexicographical order
if(a.length()==b.length())
return a<b;
//else return length wise
return a.length()<b.length();
}
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    //use comparator bcoz normal sort .. sort in lexicogrpahical order.
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}