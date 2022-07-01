//find first and last occurence of number in array
#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int k){
    if(i==n)
    return -1;
    if(arr[i]==k)
    return i;
    return firstocc(arr,n,i+1,k);

}
int lastocc(int arr[],int n,int i,int k){
    if(i==n)
    return -1;
    int rest=lastocc(arr,n,i+1,k);
    if(rest!=-1)
    return rest;
    if(arr[i]==k)
    return i;
    return -1;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int k;
cin>>k;
cout<<firstocc(arr,n,0,k)<<endl;
cout<<lastocc(arr,n,0,k)<<endl;
}