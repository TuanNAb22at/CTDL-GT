#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	int i=0,j=0;
	long long ans=0;
	while(i<n && j<m){
		if(a[i]<b[j]){
			++i;
			continue;
		}
		if(a[i]>b[j]){
			++j;
			continue;
		}
		int dem1=0,dem2=0;
		while(a[i]==b[j]){
			dem1++;
			++i;
		}
		--i;
		while(a[i]==b[j]){
			dem2++;
			++j;
		}
		ans+=1ll*dem1*dem2;
	}
	cout<<ans<<endl;
}