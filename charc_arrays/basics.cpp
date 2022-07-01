#include<iostream>
using namespace std;
int main(){
    int b[]={1,2,3};
    cout<<b<<endl;//address by default
    char a[]={'a','b','c','d','e'};
    cout<<a<<endl;//contents(special) unless find 
    // '\0' due to overloading of << with character 
    //array safer to terminate using null
    char c[]={'a','b','c','d','e','f','g','\0'};
    cout<<c<<endl;
    //input
    char s[10];
    cin>>s;//when input string then it is terminated 
    //by null internally so if string hello then it stored
    //hello\n-> hello\o(stored inside memory)
    //so it means size 6 than storing null character s
    //not size is 5
    cout<<s;
   
   char s1[]={'h','e','l','l','o'};//not terminate with null
   char s2[]="hello";

   cout<<s1<<" "<<sizeof(s1)<<endl;//5 bytes
   cout<<s2<<" "<<sizeof(s2)<<endl;//6 bytes
   