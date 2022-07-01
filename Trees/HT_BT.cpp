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
int height(node *root,int &res){
    if(root==NULL)
    return 0;
    int l=height(root->left,res);
    int r=height(root->right,res);
    int temp=max(l,r)+1;
    int ans=max(temp,1+l+r);
    res=max(res,ans);
    return temp;
}
int main(){
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    int res=INT_MIN;
    cout<<height(root,res);
    return res;
}