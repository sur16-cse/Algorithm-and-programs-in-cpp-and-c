#include<bits/stdc++.h>
using namespace std;
//remove consecutive duplicates characters
//from  a string
//ccoooding-->coding
//a[j] same as a[i] then increment i and if not
//increment j and copy a[i] over there
void removedupicates(char a[]){
int l=strlen(a);
int (l==1 or l==0)
return;
int j=0;//previous
for(int i=1;i<l;i++){
//i->current
if(a[i]!=a[j]){
j++;
a[j]=a[i];}
}
a[j+1]='\0';
return;
}
int main(){
char a[10000];
cin.getline(a,10000);
}