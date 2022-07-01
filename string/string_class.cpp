#include<bits/stdc++.h>
using namespace std;
int main(){
   //char want multiple times
   string str(5,'n');
   cout<<str<<endl;
   //take input with spaces
   string str1,str2;
   getline(cin,str1);
   cout<<str1<<endl;
   cin>>str2;//take single output without spaces
   cout<<str2<<endl;
//access char
string p="surbhi";
cout<<p[4]<<endl;
//delete particular char start index to no. of char 
p.erase(2,1);
cout<<p<<endl;
//insert at between ...start-index at which insert  ..end-string which want to insert
p.insert(3,"ks");
cout<<p<<endl;
//find substring ..start -index from ehich string want ..end-length of string which want
string b=p.substr(3,2);
cout<<b<<endl;
//convert numeric string to int
string x="234566";
int y=stoi(x);
cout<<y+3<<endl;
//convert int to string
cout<<to_string(y)+"67";//+ here act like a append
string s0;
string s1("Hello");
string s2="Hello world";
string s3(s2);//copy constructor
string s4=s3;//copy constructor
char a[]={'a','b','c','d','e','\0'}; 
string s5(a);//copy constrcutor
cout<<s0<<endl;
cout<<s1<<endl;
cout<<s2<<endl;
cout<<s3<<endl;
cout<<s4<<endl;
cout<<s5<<endl;
//check empty
if(s0.empty()){
    cout<<"s0 is an empty string"<<endl;
}
//append is more faster than +
s0.append(" I Love C++");
cout<<s0<<endl;
s0+=" and python";
cout<<s0<<endl;
//Remove
cout<<s0.length()<<endl;
s0.clear();
cout<<s0.length()<<endl;
//compare two string
s0="Apple";
s1="Mango";
//returns an integer ==0 equal,>0 or <0
cout<<s1.compare(s1)<<endl;
cout<<s1.compare(s2)<<endl;
//overloaded operator operators
if(s1>s0)
cout<<"mango is text greater than apple"<<endl;
cout<<s1[0]<<endl;
//find substrings
string s="I want to have apple juice";
int idx=s.find("apple");
cout<<idx<<endl;
string word="apple";
int len =word.length();
cout<<s<<endl;
//erase function
s.erase(idx,len+1);//remove extra spaces after removing so add 1
cout<<s<<endl;
//iterate  over all the characters in the string
for(int i=0;i<s1.length();i++){
    cout<<s1[i]<<endl;
}
cout<<endl;
//iterators-defined inside class 
//like here inside string class
//string::iterator it
//auto defined datatype according to value
for(auto it=s1.begin();it!=s1.end();it++){
    cout<<(*it)<<",";
}
cout<<endl;
//for each loop
for(auto c:s1){
    cout<<c<<",";
}
cout<<endl;
string b="abc";
cout<<b<<endl;
if(!b.empty())
cout<<"string are not empty"<<endl;
b.clear();
if(b.empty())
cout<<"string are empty"<<endl;
}