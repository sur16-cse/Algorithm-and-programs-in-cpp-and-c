#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int val){
            data=val;
            next=NULL;
            prev=NULL;
        }
};

void insertHead(Node* &head,int val){
    
    Node* n=new Node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;

}

void insertTail(Node* &head,int val){
    if(head==NULL){
        insertHead(head,val);
        return;
    }
    Node* n=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

Node *insertNew_aftergivennode(Node *&head,int val,int item){
    Node* temp=new Node(val);
    Node* p=head;
    while(p!=NULL){
        if(p->data==item){
            temp->prev=p;
            temp->next=p->next;
            if(p->next!=NULL){
                p->next->prev=temp;
            }
            p->next=temp;
            return head;
        }
        p=p->next;
    }
    cout<<item<<" "<<"not present in the list"<<endl;
    return head;

}

Node* del(Node* &head,int val){
    Node* temp;
    //if there is no node
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
        return head;
    }
    if(head->next==NULL)//only one node in the list
    {
        if(head->data==val){
        temp=head;
        head=NULL;
        free(temp);
        return head;
        }
        else{
            cout<<"Element not found"<<endl;
            return head;
        }
    }
    //Deletion of first node
    if(head!=NULL){
    if(head->data==val)
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
        return head;
    }
    //traverse till 1st node so consider from 2nd node
    //Deletion in between
    temp=head->next;
    while(temp->next!=NULL){
        if(temp->data==val){
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
            return head;
        }
        temp=temp->next;
    }

    //deletion of last node
    if(temp->data==val){
        temp->prev->next=NULL;
        free(temp);
        return head;
    }
    cout<<"Element not found"<<endl;
    return head;
    }
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    insertTail(head,1);
    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,4);
    display(head);
    insertHead(head,5);
    display(head);
    insertNew_aftergivennode(head,7,3);
    display(head);
    del(head,7);
    display(head);
    del(head,5);
    display(head);
    del(head,8);
    display(head);
}