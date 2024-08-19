#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		vector<pair<int,int>> p;
		for(int i=0;i<n;i++){
			cin>>a[i];
			int z;
			z=abs(x-a[i]);
			p.push_back({a[i],z});
		}
		stable_sort(begin(p),end(p),cmp);
		for(auto x:p){
			cout<<x.first<<" ";
		}
		cout<<endl;
		
	}
}