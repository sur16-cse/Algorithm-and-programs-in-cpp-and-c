#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
void bubble_sort(int arr[],int n,bool (&cmp)(int a,int b)){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(cmp(arr[i],arr[i+1]))
            swap(arr[i],arr[i+1]);
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
    bubble_sort(arr,n,compare);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}