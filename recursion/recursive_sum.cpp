//recursive sum of n no.
//find base cndtn here sum of 0 is 0
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    //base cndtn at which stop recurring
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){
int n;
cin>>n;
cout<<sum(n);
}
/*stack frame
sum(0) not called sum(-1) base cndtn then return 0,and return 0 in sum(1) .same for other.
sum(1)
sum(2)
sum(3)
sum(4)
main()
*/