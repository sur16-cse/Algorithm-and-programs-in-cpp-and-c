//question - read n,followed by n strings and print
//the largest string and its length
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char a[1000];
//if n=3 it create only two string becoz first string is null string
//in input string first string stored as \n
//as it is single char so use cin.get to resolve
//this problem
/*for(int i=0;i<n;i++){
    cin.getline(a,1000);
    cout<<a<<endl;
}
*/
//resolve input buffer
/*
cin.get();
for(int i=0;i<n;i++){
    cin.getline(a,1000);
    cout<<a<<endl;
}
*/
//
char largest[1000];
int len=0;
int largest_len=0;
cin.get();
for(int i=0;i<n;i++){
    cin.getline(a,1000);
    len=strlen(a);
    if(len>largest_len){
        largest_len=len;
        strcpy(largest,a);
    }
}
cout<<largest<<"and"<<largest_len<<endl;
}