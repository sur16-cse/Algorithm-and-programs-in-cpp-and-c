//pair container - bind two value as a single entity
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,char>p;
    p.first=10;
    p.second='B';
    pair<int,char>p2(p);
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    //make_pair function
    pair<int,string>p3=make_pair(100,"Audi");
    cout<<p3.first<<" "<<p3.second<<endl;
    //array of pairs
    //vector of pairs
    pair<pair<int,int>,string>car;
    //location(x,y) of car and car name string
    cout<<car.first.first<<endl;
    cout<<car.second<<endl;
}