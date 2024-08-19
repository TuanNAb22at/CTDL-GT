#include<bits/stdc++.h>
#include<set>
#include<vector>
#include<stack>
using namespace std;
int n,m;
set<int> adj[1001];
int deg[1001];
void inp(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;cin>>x;
            if(x==1){
                adj[i].insert(i);
                deg[i]++;
            }
        }
    }
}

void euler(int v){
    stack<int> st;
    vector<int> ec;
    st.push(v);
    while(!st.empty()){
        int x=st.top();
        if(adj[x].size()!=0){
            int y=*adj[x].begin();
            st.push(y);
            adj[x].erase(y);
            adj[y].erase(x);
        }
        else{
            st.pop();
            ec.push_back(x);
        }
    }
    for(int i=ec.size()-1;i>=0;i--) cout<<ec[i]<<" ";
}

int main(){
    inp();
    euler(m);
}