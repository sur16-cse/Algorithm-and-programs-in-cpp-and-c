//take the larger array towards the end
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    int counter=1;
    //n-1 large element to the end 
    while(counter<n){
        //pairwise swapping in the unsorted array
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[1001];//assume maxm array size for safer side
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bubble_sort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    /*
    n-1 iterations before we get our sorted array example if we have 6 element then run 5 iteraton means if i=0
    then i<n-1 or if counter =1 then upto counter<n
    each iteration run at n-i iteration
    */