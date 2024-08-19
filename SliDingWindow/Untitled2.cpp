#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i]<=k) cnt++;
		}
		int m=0;
		for(int i=1;i<=cnt;i++){
			if(a[i]<=k) m++;
		}
		int kq=m;
		for(int i=cnt+1;i<=n;i++){
			if(a[i]<=k){
				++m;
			}
			if(a[i-cnt]<=k) --m;
			kq=max(kq,m);
		}
		cout<<cnt-kq<<endl;
	}
}