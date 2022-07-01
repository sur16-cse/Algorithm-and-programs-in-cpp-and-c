#include<bits/stdc++.h>
using namespace std;

vector<int>bfsofGraph(int node,vector<int>ar[]){
    vector<int>a;
    int visited[10001]={0};
    queue<int>q;
    q.push(0);
    visited[0]=true;
    while (!q.empty())
    {
        int curr=q.front();
        a.push_back(curr);
        q.pop();
        for(auto child:ar[curr]){
            if(visited[child]==0){
                q.push(child);
                visited[child]=true;
            }
        }
    }
    return a;
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
    vector<int>ans=bfsofGraph(node,ar);
    for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
 }
}