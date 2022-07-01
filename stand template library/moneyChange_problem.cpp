#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a<=b;
}
int main(){
    //indian money change
    //make a chnge to minm no. of coins
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(coins)/sizeof(int);
    int money;
    cin>>money;
    //linear search
    //binary search
    //comparator
    //upper_bound or lower_bound
    //money 168
    //-->lower_bound gives greater than equal to 168 ie 200
    //require 100 so use comparator but reverse the comparision
    //ie <=
    int lb=lower_bound(coins,coins+n,money)-coins;
    cout<<lb<<" value "<<coins[lb]<<endl;//7 value 200 but need 100
    int l=lower_bound(coins,coins+n,money)-coins-1;//gives 100 but create problem if money 100
    cout<<l<<" value "<<coins[l]<<endl;
    //use comparator
    int b=lower_bound(coins,coins+n,money,compare)-coins-1;
    cout<<b<<" value "<<coins[b]<<endl;
    while(money>0){
    int b=lower_bound(coins,coins+n,money,compare)-coins-1;
    int m=coins[b];
    cout<<m<<",";
    money=money-m;
}
}