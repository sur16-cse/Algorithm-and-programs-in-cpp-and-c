#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
};
class stack{
    public:
    node* head;
    stack(){
        head=NULL;
    }
    void push(int);
    void pop();
    int top();
    void display();
};
void stack::push(int d){
    node *temp;
    temp=new node();
    temp->data=d;
    if(head==NULL)
    temp->next=NULL;
    else
    temp->next=head;
    head=temp;
}
void stack::pop(){
    //if empty
    if(head==NULL)
     cout<<"underflow";
     //delete the first element
    else
    {
        node* temp=head;
        head=head->next;
        delete(temp);
    }
}
int stack:: top(){
    return head->data;
}
void stack::display(){
    class node* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    class stack s;
    s.push(11);
   s. push(12);
    s.push(1);
    s.push(0);
    s.push(3);
    s.display();
    cout<<"\nTop element"<<" "<<s.top()<<endl;
    s.pop();
    s.pop();
    s.display();
    cout<<"\nTop element"<<" "<<s.top()<<endl;
}