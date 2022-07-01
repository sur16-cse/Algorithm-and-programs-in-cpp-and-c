#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int a[1001];//assume maxm array size for safer side
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element you want to search";
    cin>>key;
    //find out the index of that element by traversing the
    //array..linear search algorithm
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            cout<<key<<" found at"<<i<<"index";
            break;
        }
    }
    if(i==n){
        cout<<"element is not present in array";
    }
}