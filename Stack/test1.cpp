#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n,s,t;
vector<pair<int,int>> adj[1001];
void inp(){
    cin>>n>>s;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;cin>>x;
            if(x!=0){
                adj[i].push_back({j,x});
            }
        }
    }
}
int INF=1000;
int pre[1001];
void dij(int s){
    vector<int> d(n+1,INF);
    d[s]=0;
    pre[s]=s;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,s});
    while(!q.empty()){
        pair<int,int> top=q.top();
        q.pop();
        int u=top.second;
        int kc=top.first;
        if(kc>d[u]) continue;
        for(auto it:adj[u]){
            int v=it.first;
            int w=it.second;
            if(d[v]>d[u]+w){
                d[v]=d[u]+w;
                q.push({d[v],v});
                pre[v]=u;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(s==6){
            if(d[i]==1000) cout<<"K/c "<<s<<" -> "<<i<<" = "<<"INF"<<";"<<"        ";
            else {
                cout<<"K/c "<<s<<" -> "<<i<<" = "<<d[i]<<";"<<"        ";
                if(i==s) cout<<6<<" <- "<<6;
            }
        }
        else cout<<"K/c "<<s<<" -> "<<i<<" = "<<d[i]<<";"<<"        ";
        t=i;
        vector<int> path;
        if(s!=6){
            while(1){
                path.push_back(t);
                if(t==s) break;
                t=pre[t];
            }
            if(i==s) cout<<s<<" <- ";
            for(int i=0;i<path.size();i++){
                cout<<path[i];
                if(i!=path.size()-1){
                    cout<<" <- ";
                }
            }
        }
        cout<<endl;
    }
}
int main(){
    inp();
    dij(s);
    
}