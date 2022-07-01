//find middle of linked list
// naive take dummy node and first count number of node and then 1 to it 
// and traverse till that count+1 node that node is middle takes o(n) 

//TORTOISE METHOD
//initialilly slow and fast at same distance that is first node
// slow tortoise move at distance 1 and fast tortoise move at distance 2
// 1->2->3->4->5->NULL
// s  s   s            Slow
// j     j|     j       FAST
//       mid
// --odd
// --if fast point to null then that time slow tortoise at middle so stop.

// 1->2-3->4->5->6
// s s  s  s  
// j    j   |  j    j---out of bound then s stop at that
//         mid
// --even
//first of middle linked list list ie 3 either store the previous node 
// stop at second middle node


// tc o(n/2)
// sc o(1)
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node *link;
        Node(int x)
        {
            data=x;
            link=NULL;
        }
};

int middle(Node* head)
{
    Node *slow=head;
    Node *fast=head;

    if(head==NULL)
        return -1;
    else
    {
        while(fast!=NULL && fast->link!=NULL)
        {
            slow=slow->link;
            fast=fast->link->link;
        }
        return slow->data;
    }
}

void insert(Node* &head,int data)
{
    
    if(head==NULL){
        head=new Node(data);
        return;
    }

    Node *temp=head;
    while(temp->link!=NULL)
        temp=temp->link;
    temp->link=new Node(data);
    return;
}

int main()
{
    Node *head=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int data;
        cin>>data;
        insert(head,data);
    }
    cout<<middle(head);
}
