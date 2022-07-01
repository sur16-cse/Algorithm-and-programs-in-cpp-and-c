#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    rotate(arr,arr+2,arr+n);//rotate from middle
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //roate vector
    vector<int>v{10,20,30,50,76};
    rotate(v.begin(),v.begin()+3,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Next_permutation
    next_permutation(v.begin(),v.end());
    //for each loop
    for(int x:v){
        cout<<x<<" ";
    }

}