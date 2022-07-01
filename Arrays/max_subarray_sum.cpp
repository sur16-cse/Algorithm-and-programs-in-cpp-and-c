#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    cin>>a[i];
    //for maxmsum subarray we have two variable
    int currentsum=0,max=0,left=0,right=0;
    //generate all subarrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentsum=0;//every time compute sum of new subarray
        //so each time curentsum=0
            for(int k=i;k<=j;k++){
            currentsum+=a[k];
            }
            cout<<currentsum<<endl;
            //update maxmsum if cs>maxmsum
            if(currentsum>max){
            max=currentsum;
            left =i;
            right=j;
            }
  }
}
int i=0;
//print which part of array gives maxm sum
//for this required left ri8 and updatee each time
//o^n3 tc
for(i=left;i<=right;i++)
cout<<a[i]<<" ";
cout<<"max"<<" "<<max<<endl;
}