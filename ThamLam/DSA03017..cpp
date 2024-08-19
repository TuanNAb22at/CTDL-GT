#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		priority_queue<int> q;
		int k;cin>>k;
		string s;cin>>s;
		map<char,int> mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		for(auto it:mp){
			q.push(it.second);
		}
		while(k){
			int x=q.top();
			q.pop();
			x--;
			q.push(max(x,0));
			k--;
		}
		int kq=0;
		while(q.size()){
			kq+=(q.top()*q.top());
			q.pop();
		}
		cout<<kq<<endl;
	}
}