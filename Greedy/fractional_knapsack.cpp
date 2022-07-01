#include<bits/stdc++.h>
using namespace std;


typedef struct{
    int value;
    int weight;
    float density;
}Item;

void input(Item Items[],int size){
    cout<<"Enter total size of items:"<<size;
    for(int i=0;i<size;i++){
        cout<<"enter"<<i+1<<"value:weight";
        cin>>Items[i].value>>Items[i].weight;
    }
}

void display(Item Items[],int size){
    cout<<"values"<<" ";
    for(int i=0;i<size;i++){
        cout<<Items[i].value<<" ";
    }

    cout<<endl<<"weight"<<" ";
    for(int i=0;i<size;i++){
        cout<<Items[i].weight<<" ";
    }

}

bool compare(Item i1,Item i2){
    return (i1.density > i2.density);
}

float knapSack(Item Items[],int size,int W){
    float totalvalue=0,totalweight=0;

    for(int i=0;i<size;i++){
        Items[i].density=Items[i].value/Items[i].weight;
    }

    sort(Items,Items+size,compare);

    for(int i=0;i<size;i++){
        if(totalweight+Items[i].weight<=W){
            totalvalue+=Items[i].value;
            totalweight+=Items[i].weight;
        }

        else{
            int wt=W-totalweight;
            totalvalue+=(wt*Items[i].density);
            totalweight+=wt;
            break;
        }
    }

    cout<<"totalweight in bag"<<totalweight<<endl;
    return totalvalue;
}


int main(){
    int W;
    Item Items[3];

    int size;

    cout<<"size:\n";
    cin>>size;
    input(Items,size);

    cout<<"Entered data"<<endl;
    display(Items,size);

    cout<<endl<<"entered knapSack weight \n";
    cin>>W;

    float mxVal = knapSack(Items,size,W);
  cout << "---Max value for "<< W <<" weight is "<< mxVal;

}