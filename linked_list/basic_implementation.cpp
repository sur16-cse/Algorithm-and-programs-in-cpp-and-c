#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node*next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
//linked class (object oriented)
/*
class LinkedList{
    node* head;
    node* tail;
    public:
    linkedList(){

    }
    void insertAThead(int d){

    }
    ...
    ...
};
*/
//function(procedural programming)
//imp for interview 
void build(){

}
//void insert(node* head,int d)
//point by value so it does not reflect
//why dynamic
//all the variables created statically inside function get destroyed
//after function call is over in static allocation so 
//node created statically also exist after function call
//and also for memory management 
//access-using dereference (*n).next=head
//n->next=head

void insertAThead(Node*&head,int d){
if(head==NULL){
    head=new Node(d);
    return;
}
Node*n=new Node(d);
n->next=head;
head=n;
}
void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
int length(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertATTail(Node* &head,int data){
    if(head==NULL){
        head=new Node(data);
        return;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new Node(data);
    return;
    //if maintaining tail pointer in function Node* & Tail
    //then also update tail pointer inplace of return tail=tail->next
}
void insertINMiddle(Node*&head,int data,int p){
    //corner case
    if(head==NULL or p==0){
        insertAThead(head,data);
    }
    else if(p>length(head)){
        insertATTail(head,data);
    }
    //0->1->2->3
    //p=3 after 2 linked so p-1 steps
    //0->head 2->temp
    //head=head->next 2 times
    //Node* n=new Node(3)
    //n->next=temp->next
    //temp->next=n
    else{
        //take p-1 jumps
        int jump=1;
        Node*temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        //create a new node
        Node* n=new Node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
void deleteATHead(Node* &head){
    if(head==NULL){
        return;
    }
    //create temporary node after function call it get dstroyed
    Node* temp=head->next;//temp storing address of 1st node
    delete head;//when delete  with specified address
    //then it going to delete node at that particular address
    head=temp;//head points to temp node
}
void deleteATMiddle(Node* &head,int m){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    for(int i=0;i<m-1;i++){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=todelete->next;//for not to losing next node after delete node
    // we should do this step
    delete todelete;
}
void deleteATTail(Node* &head){
    if(head==NULL){
        return;
    }
    Node* prev=head;
    while(prev->next->next!=NULL)//til upto one node before last node
    {
        prev=prev->next;
    }
    delete(prev->next);//deleting address of last node
    prev->next=NULL;

}
//search operation
//linear search bcoz even it is sorted cant apply binary search
//bcoz finding the middle element takes on(n) times not feasible
bool search(Node* head,int k){
    Node* temp=head;
    while(temp!=NULL){
        if(head->data==k)
        return true;
        head=head->next;
    }
    return false;
    }
    //recursively search
    bool searchRecursive(Node* head,int k){
        if(head==NULL)
        return false;
        //rec check at head ,if not check rem. linked list 
    if(head->data==k){
        return true;
    }
    else
     return searchRecursive(head->next,k);
    }
    
int main(){
    Node*head=NULL;
    insertAThead(head,12);
    insertAThead(head,1);
    insertAThead(head,19);
    insertAThead(head,0);
    print(head);
    cout<<"length"<<" "<<length(head)<<endl;
    int p;
    cout<<"positiotn at which element is inserted";
    cin>>p;
    insertINMiddle(head,7,p);
    print(head);
    insertATTail(head,8);
    print(head);
    deleteATHead(head);
    print(head);
    int m;
    cout<<"position at which element is deleted";
    cin>>m;
    deleteATMiddle(head,m);
    print(head);
    deleteATTail(head);
    print(head);
    int a;
    cout<<"element to be searched"<<endl;
    cin>>a;
    if(search(head,a))
    cout<<"element found"<<endl;
    else
    cout<<"not found"<<endl;
    int b;
    cin>>b;
    if(searchRecursive(head,b))
    cout<<"element found"<<endl;
    else
    cout<<"not found"<<endl;

    
}