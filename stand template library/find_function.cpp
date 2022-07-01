#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,10,13,45,76,43,98,34};
    int n=sizeof(arr)/sizeof(int);
    //search-->find--search like linear search
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    cout<<it<<endl;//return address of search element
    int index=it-arr;//base address=arr it=arr+2(let say)
    //so index=2(let)
    if(index==n)
    cout<<key<<" "<<"not present";
    else
    cout<<"present at index"<<index;

}