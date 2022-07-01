#include<iostream>
using namespace std;
class Pattern{
public:
int x;
void pattern_1(){
int i,j;
for(int i=1;i<=x;i++)
{
    for(int j=1;j<=x;j++){
        if(j>=x+1-i)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}
cout<<"-----------------------------"<<endl;
}
void pattern_2(){
int i,j;
for(int i=1;i<=x;i++)
{
    for(int j=1;j<=x;j++){
        if(j<=x+1-i)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
}
}
};
int main(){
 int n;
 cin>>n;
 Pattern p={n};
 p.pattern_1();
 p.pattern_2();
}