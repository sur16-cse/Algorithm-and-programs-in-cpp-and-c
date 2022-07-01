//convert whole string into uppercase or lowercase
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abcdefghijklmnopqrstuvwxyz";
    //differnce between uppercase and lowercase
    cout<<'a'-'A'<<endl;
    //convert into upper case 
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
    }
    cout<<str<<endl;
    //inbuilt function
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    //convert into lower case
    string str1="ANBJNK";
    for(int i=0;i<str1.size();i++){
        if(str1[i]>='A' && str[i]<='Z')
        str1[i]+=32;
    }
    cout<<str1<<endl;
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    cout<<str1<<endl;
    
}