#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long ans=0;
		priority_queue<int> pq; 
		map<char,int> mp;
		int k;
		string s;
		cin>>k>>s;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		for(auto it:mp){
			pq.push(it.second);
		}
		while(k>0){
			int top=pq.top();
			pq.pop();
			pq.push(max(top-1,0));
			k--;
		}
		while(!pq.empty()){
			ans+=(long long)pq.top()*pq.top();
			pq.pop();
		}
		cout<<ans<<endl;
	}
}