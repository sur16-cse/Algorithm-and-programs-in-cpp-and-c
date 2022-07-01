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
int search(int inorder[],int s,int e,int curr){
    for(int i=s;i<=e;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* buildtree(int postorder[],int inorder[],int s,int e){
    static int idx=4;
    if(s>e){
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    node* n=new node(curr);
    if(s==e){
        return n;
    }
    int pos=search(inorder,s,e,curr);
    n->left=buildtree(postorder,inorder,s,pos-1);
    n->right=buildtree(postorder,inorder,pos+1,e);
    return n;
}
void inorderPrint(node* root){
    if(root==NULL)
    return;
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}
int main(){
int postorder[]={4,2,5,3,1};
int inorder[]={4,2,1,5,3};
node* root=buildtree(postorder,inorder,0,4);
inorderPrint(root);
}