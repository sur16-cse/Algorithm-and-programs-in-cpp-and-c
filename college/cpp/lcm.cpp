#include<iostream>
using namespace std;
class lcm{
public:
int x,y,z;
void find_lcm(){
    int max;
max=(x>y)?(x>z)?x:y:(y>z)?y:z;
while(1){
    if(max%x==0 && max%y==0 && max%z==0)
    break;
    max++;
}
cout<<max<<endl;
}
};
int main(){
 int l,m,n;
 cin>>l>>m>>n;
 lcm p={l,m,n};
 p.find_lcm();
}