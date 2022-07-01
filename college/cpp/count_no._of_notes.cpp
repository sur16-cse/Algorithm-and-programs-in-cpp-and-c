#include<iostream>
using namespace std;
 int notes[9]={2000,500,200,100,50,20,10,5,1};
 int notecounter[9]={0};
class amount{
    int m;
    public:
    amount(int a){
        m=a;
    }
    void money_change();
    void show();
};
void amount::money_change(){
    for(int i=0;i<9;i++){
        if(m>=notes[i]){
          notecounter[i]=m/notes[i];
          m=m-notecounter[i]*notes[i];
        }
    }
}
void amount::show(){
    for(int i=0;i<9;i++){
        if(notecounter[i]!=0)
        cout<<notes[i]<<"->"<<notecounter[i]<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    amount t(a);
    t.money_change();
    t.show();
}