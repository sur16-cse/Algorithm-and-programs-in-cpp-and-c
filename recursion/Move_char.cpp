//move all x char to end of string
//I/p-- axxbdxcefxhix
//op--  abdcefhixxxxx
#include<bits/stdc++.h>
using namespace std;
string moveallx(string s){
    if(s.length()==0){
    return "";
    }
    char ch=s[0];
    string ans=moveallx(s.substr(1));
    if(ch=='x')
    return ans+ch;
    return ch+ans;
}
int main(){
    string s="axxbdxcefxhix";
    cout<<moveallx(s);
}