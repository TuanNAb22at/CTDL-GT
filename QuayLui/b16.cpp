#include<bits/stdc++.h>
using namespace std;
int x[31],n,s,k,ans,ok;
int a[31];
int dem=0;
void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		dem++;
		x[i]=j;
		if(i==k){
			int sum=0;
			for(int j=1;j<=k;j++){
				sum+=a[x[j]];
			}
			if(sum==s){
				ok=1;
				return;
			}
		}
		else Try(i+1);
	}
}
void inp(){
		cin>>n>>s;
		ans=0;
		ok=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1,greater<int>());
		for(int i=1;i<=n;i++){
			k=i;
			Try(1);
			if(ok){
				cout<<k;
				break;
			}
		}
		if(ok==0) cout<<"-1";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		cout<<endl;
	}
}