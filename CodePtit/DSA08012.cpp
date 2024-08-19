#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<int> v;
	for(int i=0;i<=100000;i++){
		int check=1;
		string s=to_string(i);
		map<char,int> mp;
		mp[s[0]]++;
		if(s[0]-'0'>5) check=0;
		for(int j=1;j<s.size();j++){
			if(s[j]-'0' >5 ) check=0;
			mp[s[j]]++;
		}
		for(auto it:mp){
			if(it.second>=2) check=0;
		}
		if(check){
			v.push_back(i);
		}
	}
	while(t--){
		int l,r;
		cin>>l>>r;
		int ans=0;
		for(int i=0;i<=v.size();i++){
			if(v[i]>=l && v[i]<=r){
				++ans;
			}
		}
		cout<<ans<<endl;
	}
}