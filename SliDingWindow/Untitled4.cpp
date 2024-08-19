#include<bits/stdc++.h>
using namespace std;
bool slove(){
	set<int> se;
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=k;i++){
		if(se.count(a[i])) return true;
		se.insert(a[i]);
	}
	for(int i=k+1;i<=n;i++){
		se.erase(a[i-k]);
		if(se.count(a[i])) return true;
		se.insert(a[i]);
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		if(slove()) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}