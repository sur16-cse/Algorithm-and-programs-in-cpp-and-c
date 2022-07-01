#include<bits/stdc++.h>
using namespace std;

void fun(int V,vector<int>ar[],vector<int>&dfs,int vis[]){
    vis[V]=1;
    dfs.push_back(V);
    for(auto child:ar[V]){
        if(vis[child]==0)
	        fun(child,ar,dfs,vis);
    }
}

vector<int>dfsofGraph(int node,vector<int>ar[]){
    vector<int>dfs;
    int vis[10001]={0};
    for(int i=0;i<node;i++){
        if(vis[i]==0)
           fun(i,ar,dfs,vis);
    }
    return dfs;
}

int main(){
    int node,edge;
    cin>>node>>edge;
    vector<int>ar[node];

    while(edge--){
        int u,v;
        cin>>u>>v;
        ar[u].push_back(v);
        ar[v].push_back(u);
    }
    vector<int>ans=dfsofGraph(node,ar);
    for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
 }
}