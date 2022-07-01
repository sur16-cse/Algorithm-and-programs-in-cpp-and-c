//Check whether a string is a valid shuffle of two strings or not
#include<bits/stdc++.h>
using namespace std;

void solve(string s1,string s2,string res){
    int l1=s1.length();
    int l2=s2.length();
    int lr=res.length();
    if((l1+l2)!=lr) cout<<"No"<<endl;
    else{
        int f=0;
        int l=0,r=0,s=0;
        while(s<lr){
            if(l<l1 && s1[l]==res[s])l++;
            else if(r<l2 && s2[r]==res[s])r++;
            else{
                f=1;
                break;
            }
            s++;
        }
        //check whether l1 and l2 pointer reach to last or not
        if(l<l1 || r<l2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string res;
    cin>>res;
    solve(s1,s2,res);
}