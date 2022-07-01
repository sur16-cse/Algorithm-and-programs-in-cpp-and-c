//Inorder Traversal 
/*--left 
--root
--right

            A          H    D
           / \
           D  Z        |H   |
          / \  \       |D   |
          H  L  c      |A   |A
            /
           P  

Recursive-->Iterative
Recursive implicitly use stack 
so to convert from recursive to iterative use stack*/

#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        char val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(char x){
            val=x;
            left=NULL;
            right=NULL;
        }
};

void inorder_traversal(TreeNode* root){
    stack<TreeNode*>st;
    TreeNode* curr=root;
    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            curr=st.top();
            st.pop();
            cout<<curr->val<<" ";
            curr=curr->right;
        }
    }
}

int main(){
    TreeNode* root=new TreeNode('A');
    root->left=new TreeNode('D');
    root->left->left=new TreeNode('H');
    root->left->right=new TreeNode('L');
    root->left->right->left=new TreeNode('P');
    root->right=new TreeNode('Z');
    root->right->right=new TreeNode('C');
    cout<<"Inorder Traversal"<<" ";
    inorder_traversal(root);
    cout<<endl;
}