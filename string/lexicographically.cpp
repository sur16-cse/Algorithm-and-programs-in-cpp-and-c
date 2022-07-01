//lexicographically--> aa, ab, ac , ad, gz....
#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1st method
    char s1[]="abc";
    char s2[]="bcd";
    int res=strcmp(s1,s2);
    //give  res (positive if s1>s2 , zero if s1==s2 , negative if s1<s2)
    if(res>0)
    cout<<"Greater"<<endl;
    else if(res==0)
    cout<<"same"<<endl;
    else
    cout<<"smaller"<<endl;
    //2nd method --> direct comparison operator use
    string a="abc";
    string b="bcd";
    if(a==b)
    cout<<"same"<<endl;
    else if(a<b)
    cout<<"smaller"<<endl;
    else
    cout<<"greater"<<endl;

}