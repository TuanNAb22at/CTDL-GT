#include<iostream>
#include<cstring>
#include<set>
#include<vector>
using namespace std;

int n,m,a[100][100];
int deg[1001];
int hc[1001];
set<int> adj[1001];
bool used[1001];
void inp(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        
            int x,y;cin>>x>>y;
            adj[x].insert(y);
            adj[y].insert(x);
            deg[x]++;
            deg[y]++;
        
    }
    memset(used,false,sizeof(used));
}

bool check(){
    for(int i=1;i<=n;i++){
        if(deg[i]<n/2) return false;
    }
    return true;
}

void hamitol_cycle(int pos,int u){
    hc[pos]=u;
    used[u]=true;
    if(pos==n){
        if(adj[u].find(hc[1])!=adj[u].end()){
            hc[++pos]=hc[1];
            for(int j=1;j<=pos;j++){
                cout<<hc[j]<<" ";
            }
            cout<<endl;
            return;
        }
    }
    for(int v:adj[u]){
        if(!used[v]){
            hamitol_cycle(pos+1,v);
            used[v]=false;
        }
    }
    used[u]=false;
}
int main(){
    inp();
    hamitol_cycle(1,1);
    
}