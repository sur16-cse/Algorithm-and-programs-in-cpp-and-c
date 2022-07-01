#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20]={0};//default
    cout<<a[0]<<endl;
    int b[34]={3,5,8,69};
    cout<<b[32]<<" "<<b[1]<<endl;//get access element through index
    int count =0;
    for(int i=0;i<20;i++){
        cout<<a[i]<<" ";
        count++;
    }
    cout<<endl;
    cout<<count<<endl;//count no. of elements array take
    cout<<sizeof(a)<<endl;//size of array means no. of byte it take
    int n=sizeof(a)/sizeof(int);//number of elements in array
    cout<<n<<endl;
    for(int i=1;i<=20;i++)//indexing always start from 0 to less than one ass array size so last digit asssigned garbage
    cout<<a[i]<<" ";
    cout<<endl;
    a[8]=100;//update  single index
    cout<<a[8]<<endl;
}