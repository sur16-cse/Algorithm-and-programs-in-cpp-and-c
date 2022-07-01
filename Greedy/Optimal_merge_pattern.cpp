#include<bits/stdc++.h>
using namespace std;

int optimalMerge(int arr[],int n){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
        pq.push(arr[i]);
    int count=0;
    while(pq.size()!=1){
        int smaller1=pq.top();
        pq.pop();
        int smaller2=pq.top();
        pq.pop();
        int curr=smaller1+smaller2;
        count+=curr;
        pq.push(curr);
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<optimalMerge(arr,n);
}