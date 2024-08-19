#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> se;
		for(int i=0;i<n;i++){
			int u,v;char c;
			cin>>u>>v>>c;
			if(i==0) se.insert(u);
			se.insert(v);
		}
		for(int x:se){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}