#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		map<char,int> mp;
		priority_queue<int> q;
		int k;cin>>k;
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		for(auto x:mp){
			q.push(x.second);
		}
		while(k){
			int x=q.top();
			q.pop();
			x--;
			q.push(max(x,0));
			k--;
		}
		long long ans=0;
		while(!q.empty()){
			int x=q.top();
			ans+=(long long)(x*x);
			q.pop();
		}
		cout<<ans<<endl;
	}
}