#include<bits/stdc++.h>
using namespace std;
//define a comparator function
bool compare(int a,int b){
    //internally compare show
    cout<<"comparing"<<a<<"and"<<b<<endl;
    return a>b;
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort an array using sort function
    //efficient approach than bubble insertion selection
    sort(a,a+n);//sort in ascending order
    for(int i=0;i<n;i++)
        cout<<a[i]<<" "endl;
//sort in descending order
//use comparator
sort(a,a+n,compare);//sending function name as a parameter to another
//function..function called internally
for(int i=0;i<n;i++){
    cout<<a[i]<<" "endl;
}
// sort function internal structure is similar to bubble
//sort
//without use comaparator
sort(a,a+n,greater<int>());
for(int i=0;i<n;i++){
    cout<<a[i]<<" "endl;
}
}