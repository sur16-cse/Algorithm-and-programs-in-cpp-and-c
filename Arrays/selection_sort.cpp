#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    //outer loop run n-1 bcoz when only element left then no 
    //need to sort
    for(int i=0;i<n-1;i++){
        //find out the smallest element idx in the unsorted part
       int min_index=i;
        //traverse the array in two parts sorted and unsorted
        //so j done for unsorted part
        for(int j=i;j<=n-1;j++){
         if(a[j]<a[min_index])
         min_index=j;
        }
        //swapping costly operation always swap after loop
        swap(a[i],a[min_index]);
    }
}
int main(){
    int n,key;
    cin>>n;
    int a[1001];//assume maxm array size for safer side
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
selection_sort(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}