#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second!=b.second){
		return a.second>b.second;
	}
	else{
		return a.first<b.first;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		map<int,int> mp;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		vector<pair<int,int>> v;
		for(auto it:mp){
			v.push_back({it.first,it.second});
		}
		sort(begin(v),end(v),cmp);
		for(int i=0;i<v.size();i++){
			for(int j=0;j<v[i].second;j++){
				cout<<v[i].first<<" ";
			}
		}
		cout<<endl;
	}
}