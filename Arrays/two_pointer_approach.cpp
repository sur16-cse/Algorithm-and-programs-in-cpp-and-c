//given a sorted array ,find pair of elements that sum 
//to k
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    while(i<j){
        int current_sum=a[i]+a[j];
        if(current_sum>k){
            j--;
        }
        else if(current_sum<k){
            i++;
        }
        else if(current_sum==k){
            cout<<a[i]<<"and"<<a[j]<<endl;
            i++;
            j--;
        }
    }
}