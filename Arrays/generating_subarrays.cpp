#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    cin>>a[i];
    //generate all subarrays
    for(int i=0;i<n;i++){
        //j should always greater than or equal to i
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
            cout<<a[k]<<" ";
            cout<<endl;
        }

    }
}