#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			int x=a[i],y=b[i];
			v.push_back({x,y});
		}
		sort(begin(v),end(v),cmp);
		int dem=1;
		int tmp=v[0].second;
		for(int i=1;i<v.size();i++){
			if(v[i].first>tmp){
				dem++;
				tmp=v[i].second;
			}
		}
		cout<<dem<<endl;
	}
}