#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			v.push_back({x,i});
		}
		sort(begin(v),end(v),cmp);
		int kq=-1;
		int tmp=v[0].second;
		for(int i=1;i<n;i++){
			tmp=min(tmp,v[i].second);
			if(v[i].second>tmp){
				kq=max(kq,v[i].second-tmp);
			}
		}
		cout<<kq<<endl;
	}
}