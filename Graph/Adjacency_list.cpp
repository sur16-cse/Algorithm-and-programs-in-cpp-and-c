#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>printGraph(int node,vector<int>ar[])
{
    vector<vector<int>>a(node);
    for(int i=0;i<node;i++)
    {
        a[i].push_back(i);
        for(int j=0;j<ar[i].size();j++)
            a[i].push_back(ar[i][j]);
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
    vector<vector<int>>ans=printGraph(node,ar);
    for(int i=0;i<ans.size()-1;i++){
        for(int j=0;j<ans[i].size()-1;j++)
            cout<<ans[i][j]<<"->";

    cout<<ans[i][ans[i].size()-1];
    cout<<endl;
    }
}

