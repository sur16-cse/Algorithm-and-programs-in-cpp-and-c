#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data; 
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int countnodes(node* root){
    if(root==NULL)
    return 0;
    return countnodes(root->left)+countnodes(root->right)+1;
}
int main(){
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->left->right=new node(5);
root->right->right=new node(6);
cout<<countnodes(root)<<endl;
}