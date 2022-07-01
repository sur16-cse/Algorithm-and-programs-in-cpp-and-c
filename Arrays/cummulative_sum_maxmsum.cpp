#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int cumSum[1000]={0};
    cin>>a[0];
    cumSum[0]=a[0];
    for(int i=1;i<n;i++){
    cin>>a[i];
    cumSum[i]=cumSum[i-1]+a[i];
    }
    //for maxmsum subarray we have two variable
    int currentsum=0,max=0,left=0,right=0;
    //generate all subarrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentsum=0;//every time compute sum of new subarray
        //so each time curentsum=0
            //element of subarray(i,j)
            currentsum=cumSum[j]-cumSum[i-1];
            // maxmsum if cs>maxmsum
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
//on^2 tc
for(i=left;i<=right;i++)
cout<<a[i]<<" ";
cout<<"max"<<" "<<max<<endl;
}