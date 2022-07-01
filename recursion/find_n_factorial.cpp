//find the factorial of a number n
//n!=n*n-1*n-2*...*1
//0!=1
#include<bits/stdc++.h>
using namespace std;
int factorail(int n){
    //base cndtn at which stop recurring
    if(n==0){
        return 1;
    }
    return n*factorail(n-1);
}
int main(){
int n;
cin>>n;
cout<<factorail(n);
}