#include<bits/stdc++.h>
using namespace std;

typedef struct{
    int start;
    int finish;
}Activity;

void input(Activity arr[],int size){
    cout<<"Enter total size of arr:"<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<"enter"<<" "<<i+1<<" "<<"start:finish"<<" ";
        cin>>arr[i].start>>arr[i].finish;
    }
}

bool compare(Activity s1, Activity s2){
    return(s1.finish<s2.finish);
}

void printMaxActivities(Activity arr[], int size){

    sort(arr,arr+size,compare);

    int i=0;
    cout<<arr[i].start<<":"<<arr[i].finish;

    for(int j=1;j<size;j++){
        if(arr[j].start >= arr[i].finish){
            cout<<arr[j].start<<":"<<arr[j].finish<<endl;
            i=j;
        }

    }

}

int main(){
    

    int size;
    cin>>size;
    Activity arr[size];
    input(arr,size);
    printMaxActivities(arr,size);
}