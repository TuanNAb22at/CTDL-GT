#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first;
		v[i].second=i;
	}
	sort(begin(v),end(v));
	int l=0,r=n-1;
	while(l<r){
		int sum=v[l].first+v[r].first;
		if(sum==x){
			cout<<v[l].second+1<<" "<<v[r].second+1; return 0;
		}
		else if(sum<x) l++;
		else r++;
	}
	cout<<"null";
	
}