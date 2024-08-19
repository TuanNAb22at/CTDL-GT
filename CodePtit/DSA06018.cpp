#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		map<int,int> mp;
		int m1=INT_MAX,m2=INT_MIN;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			mp[a[i]]++;
			m1=min(m1,a[i]);
			m2=max(m2,a[i]);
		}
		int ans=0;
		for(int i=m1;i<=m2;i++){
			if(mp[i]==0){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}