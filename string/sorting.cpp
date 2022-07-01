#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()){
    return a<b;
}
return a.length()>b.length();

}
int main(){
    //take input
    string s;
    cin>>s;
    //another way to take input 
    int n;
    cin>>n;
    string s1[100];
    for(int i=0;i<n;i++){
        getline(cin,s1[i]);
    }
    for(int i=0;i<n;i++){
        cout<<s1[i]<<endl;
    }
    sort(s1,s1+n);//compare lexicographically
    for(int i=0;i<n;i++){
        cout<<s1[i]<<endl;
    }
    //another way to compare
    sort(s1,s1+n,compare);
    for(int i=0;i<n;i++){
        cout<<s1[i]<<endl;
    }
}