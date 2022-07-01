#include <iostream>
using namespace std;
void turnaround(int b[],int w[],int n){
    int t[n],sum1=0;
    for(int i=0;i<n;i++){
        t[i]=w[i]+b[i];
        sum1+=t[i];
    }
    for(int i=0;i<n;i++){
        cout<<t[i]<<" ";
    }
    cout<<endl;
    cout<<"AT"<<" "<<(float)sum1/n<<endl;
}
void waiting(int b[],int n)
{
  int w[n],sum=0;
  w[0]=0;
  for(int i=1;i<n;i++){
      w[i]=w[i-1]+b[i-1];
      sum+=w[i];
  }
  for(int i=0;i<n;i++){
      cout<<w[i]<<" ";
  }
  cout<<endl;
  turnaround(b,w,n);
  cout<<"AW"<<" "<<(float)sum/n<<endl;
}
int main(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    waiting(b,n);
}