#include<iostream>
using namespace std;
class Swap{
    int x,y;
    public:
    Swap(int a,int b){
        x=a;
        y=b;
    }
    void swap_();
    void show()
    {
    	cout<<"x="<<x<<"  ";
    	cout<<"y="<<y<<endl;
    }
};
void Swap::swap_(){
    x=x+y;
    y=x-y;
    x=x-y;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    Swap s1(a,b);
     cout<<"before swap ";
     s1.show();
    s1.swap_();
     cout<<"after swap ";
     s1.show();
}