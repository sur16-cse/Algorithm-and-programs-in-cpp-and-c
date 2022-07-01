#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=90;
    int b=45;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    int arr[]={1,2,3,5,6,8,9};
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,arr+4);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap(arr[0],arr[2]);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}