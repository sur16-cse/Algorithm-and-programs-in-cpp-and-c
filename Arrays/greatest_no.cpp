#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1001];//assume maxm array size for safer side
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //algorithm to find largest and smallest
   // initialise largest =-~
   //initialise smallest =+~
// so that value get update each time
    int largest=INT_MIN;//min range macro
    int smallest=INT_MAX;//maxm range macro
    for (int i=0;i<n;i++){
       if(a[i]>largest)
       largest=a[i];
       if(a[i]<smallest)
      smallest= a[i];
    }
    cout<<"smallest"<<" "<<smallest<<endl;
    cout<<"largest"<<" "<<largest<<endl;
    //using inbuilt function min max avoid if else
    for(int i=0;i<n;i++){
        largest=max(a[i],largest);
        smallest=min(a[i],smallest);
    }
    cout<<"smallest"<<" "<<smallest<<endl;
    cout<<"largest"<<" "<<largest<<endl;
 //without traversing array find max and minm element
 cout<<*max_element(a,a+n)<<endl;
 cout<<*min_element(a,a+n)<<endl;
}