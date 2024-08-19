#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> adj[1001];
bool visited[1001];

void inp(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;cin>>x;
            if(x==1) adj[i].push_back(j);
        }
    }
    memset(visited,false,sizeof(visited));
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int top=q.front();
        q.pop();
        cout<<top<<" ";
        for(int v:adj[top]){
            if(!visited[v]){
                q.push(v);
                visited[v]=true;
            }
        }
    }
}
int main(){
    inp();
    bfs(1);
}