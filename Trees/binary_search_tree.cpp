#include<bits/stdc++.h>
using namespace std;

 class Bst
{
    public:
        int data;
        Bst* left;
        Bst* right; 
        Bst(int x){
            data=x;
            left=NULL;
            right=NULL;
        }
};

Bst* Insert(Bst* root,int data){
    if(root==NULL){
        
        root=new Bst(data);
        return root;
    }
    else if(data<root->data)
        root->left=Insert(root->left,data);
    else 
        root->right=Insert(root->right,data);
    return root;
}

bool Search(Bst* root,int data){
    if(root==NULL) return false;
    else if(root->data==data) return true;
    else if(data<root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

int main(){
    Bst *root=NULL;//creating an empty tree
    int n;
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        root=Insert(root,data);
    }

    int number;
    cin>>number;
    if(Search(root,number)==true)
        cout<<"Element Found\n";
    else
    cout<<"Not Found\n";
}