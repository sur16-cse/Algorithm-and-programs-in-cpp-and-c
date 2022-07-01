#include<bits/stdc++.h>
using namespace std;
class Palindrome{
string x;
public:
 Palindrome(string a){
     x=a;
 }
 bool isPalindrome();
 void show()
 {
  if(isPalindrome())
    cout<<"palindrome string";
  else
    cout<<"snot a palindrome string";
 }
};
bool Palindrome::isPalindrome(){
    int i=0;
    int j=x.length()-1;
    while(i<j){
        if(x[i]==x[j]){
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}
int main(){
    string a;
    cin>>a;
    Palindrome p(a);
    p.isPalindrome();
    p.show();
}