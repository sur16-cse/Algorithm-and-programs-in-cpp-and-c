//print frequencies of character(in sorted order) in a string of 
//lower case 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="geeksforgeeks";
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        //str[i]-'a' gives index like for g it gives 6 index
        //frequency array here is count;
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
    if(count[i]>0){
    //(char)(i+'a') -->print character whose frequnecy is count 
    cout<<(char)(i+'a')<<" "<<count[i]<<endl;
    }
    }
}