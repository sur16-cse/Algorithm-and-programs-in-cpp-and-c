#include<bits/stdc++.h>
using namespace std;

class Jobsequencing
{
    public:
    int id;
    int profit;
    int dead;
};

void input(Jobsequencing arr[],int n){
    cout<<"Enter total size of arr:"<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter"<<" "<<i+1<<" "<<"id:profit:dead"<<" ";
        cin>>arr[i].id>>arr[i].profit>>arr[i].dead;
    }
}

bool compare(Jobsequencing s1, Jobsequencing s2){
    return(s1.profit>s2.profit);
}

void printJobscheduling(Jobsequencing arr[],int n){
    sort(arr,arr+n,compare);

    int result[n];
    bool store[n]={false};
    for(int i=0;i<n;i++){
        for(int j=min(n,arr[i].dead)-1;j>=0;j--){
            if(store[j]==false){
                result[j]=i;
                store[j]=true;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(store[i])
        {
            cout<<arr[result[i]].id<<endl;
        }
    }
}

int main(){
    cout<<"size"<<endl;
    int n;
    cin>>n;
    Jobsequencing arr[n];
    input(arr,n);
    printJobscheduling(arr,n);
}

