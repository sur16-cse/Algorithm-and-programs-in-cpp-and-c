//form the biggest number from numeric string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="45783979079";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}