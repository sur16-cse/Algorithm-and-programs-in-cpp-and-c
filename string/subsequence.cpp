#include <iostream>
using namespace std;
bool issubseq( string &s1,string &s2){
    //string have 1 maxm size than character stored of same string in char array
    int m=s1.size()-1;
    int n=s2.size()-1;
    //base case if original string is less than substring 
    if(n<m)
	return false;
    int j=0;
    for(int i=0;i<n && j<m;i++){
        //always that index is first in comparison which is incremented in if else
        if(s1[j]==s2[i])
        j++;
    } 
     return(j==m);
}
int main() {
	int t;
	cin>>t;
	while(t--){
    string s1,s2;
    cin>>s1>>s2;
    if(issubseq(s1,s2))
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
	}
}
//check if string is subsequence of other here 
// here s1 --> subsequence 
// s2 --> original string in which subsequence is find 
//maxm 2^n substring can be made
