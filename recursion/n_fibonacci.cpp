//print nth fibonacci
//0,1,1,2,3,5,8,13
// fib(n)=fib(n-1)+fib(n-2);
//fib(0)=0 fib(1)=1
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    //base cndtn at which stop recurring
    if(n==0 || n==1){
        return n;// ie return 0 or 1
    }
    return fib(n-1)+fib(n-2);
}
int main(){
int n;
cin>>n;
cout<<fib(n);
}