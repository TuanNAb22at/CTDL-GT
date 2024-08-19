#include<iostream>
#include<vector>
#include<cstring>
#include<utility>

using namespace std;

int n;
vector<int> adj[1001];
vector<pair<int,int>> p;
bool visited[1001];

void inp(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;cin>>x;
            if(x==1){
                adj[i].push_back(j);
                if(j>i) p.push_back({i,j});
            }
        }
    }
}

void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

void dfs1(int u,int s,int t){
    visited[u]=true;
    for(int v:adj[u]){
        if((u==s && v==t )|| (u==t && v==s)) continue;
        if(!visited[v]) dfs1(v,s,t);
    }
}

void CanhCau(){
    int tplt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ++tplt;
            dfs(i);
        }
    }
    for(pair<int,int> it:p){
        int x=it.first,y=it.second;
        int dem=0;
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                dem++;
                dfs1(i,x,y);
            }
        }
       if(dem>tplt){
           cout<<x<<" "<<y<<endl;
       } 
    }
}
int main(){
    inp();
    CanhCau();
}
