#include<bits/stdc++.h>
#include <queue>
using namespace std;

#define Max_Size 100

class Huffman_TreeNode{
    public:
    char data;
    int freq;
    Huffman_TreeNode* left;
    Huffman_TreeNode* right;
    Huffman_TreeNode(char character,int frequency){
        data=character;
        freq=frequency;
        left=right=NULL;
    }
};

class compare{
    public:
    bool operator()(Huffman_TreeNode* a,Huffman_TreeNode* b){
        return a->freq > b->freq;
    }
};

Huffman_TreeNode* generateTree(priority_queue<Huffman_TreeNode*,vector<Huffman_TreeNode*>,compare> pq){
    while (pq.size()!=1){
        Huffman_TreeNode* left=pq.top();
        pq.pop();
        Huffman_TreeNode* right=pq.top();
        pq.pop();
        Huffman_TreeNode* node=new Huffman_TreeNode('$',left->freq + right->freq);
        node->left=left;
        node->right=right;
        pq.push(node);
    }
    return pq.top();
}

void printNodes(Huffman_TreeNode* root,int arr[],int top){
    if(root->left){
        arr[top]=0;
        printNodes(root->left,arr,top+1);
    }

    if(root->right){
        arr[top]=1;
        printNodes(root->right,arr,top+1);
    }

    if(!root->left && !root->right){
        cout<<root->data<<" ";
        for(int i=0;i<top;i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
}

void HuffmanCodes(char data[],int freq[],int size){
    priority_queue<Huffman_TreeNode*,vector<Huffman_TreeNode*>,compare>pq;
    for(int i=0;i<size;i++){
        Huffman_TreeNode* newNode =new Huffman_TreeNode(data[i],freq[i]);
        pq.push(newNode);
         }
    Huffman_TreeNode* root=generateTree(pq);
    int arr[Max_Size], top=0;
    printNodes(root,arr,top);
}

int main(){
    int a;
    cin>>a;
    char data[a];
    for(int i=0;i<a;i++){
        cin>>data[i];
    }

    int freq[a];
    for(int i=0;i<a;i++){
        cin>>freq[i];
    }

   HuffmanCodes(data,freq,a);
}