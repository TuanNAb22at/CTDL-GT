#include<bits/stdc++.h>
using namespace std;
int main(){
		int n,k,b;cin>>n;	
		cin>>k>>b;
		int cnt[n+1]={0};
		for(int i=1;i<=b;i++){
			int x;cin>>x;
			cnt[x]=1;
		}
		int d=0,ans;
		for(int i=1;i<=k;i++){
			if(cnt[i]==1) d++;
		}
		ans=d;
		for(int i=k+1;i<=n;i++){
			if(cnt[i]==1) d++;
			if(cnt[i-k]==1) d--;
			ans=min(ans,d);
		}
		cout<<ans<<endl;
}