//insert the current element in right position
//card problem
//divide array in two part one sorted and other unsorted
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    for(int i=1;i<=n-1;i++)//unsoreted part
    {
    int e=a[i];//e->current element 
    int j=i-1;//sorted part till n-1
    while(j>=0 && a[j]>e)
    {
        a[j+1]=a[j];//copy at next position
        j--;//decrement sp that current assigned to before copy postion
    }
    a[j+1]=e;
    }
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    cin>>a[i];
    insertion_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}