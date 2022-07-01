#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={20,30,40,40,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);
    //search in a sorted array
    int key;
    cin>>key;
   bool present=binary_search(arr,arr+n,key);
   if(present)
   cout<<"present"<<endl;
   else
   cout<<"absent"<<endl;
   // get the index of the element
   //lower_bound(s,e,key) and upper_bound(s,e,key) return address where element stored
   // o(logn) for 2nd case
   // auto - address of bucket inside the array so here use auto instead of 
   //int*(it also be used) 
   auto lb=lower_bound(arr,arr+n,40);//gives address of first occurence of 40
   cout<<"lower_bound"<<(lb-arr)<<endl;//gives >= key
   auto ub=upper_bound(arr,arr+n,40);//gives address of element > than 40
   cout<<"upper_bound"<<(ub-arr)<<endl;//gives > key
   //no.of occurence of element upper -lower 
   cout<<"occurence of 40"<<" "<<(ub-lb)<<endl;

}