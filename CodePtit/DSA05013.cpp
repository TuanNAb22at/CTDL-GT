#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
ll a[100005];
void slove(){
	a[0]=1;
	for(int i=0;i<=n;i++){
		for(int j=1;j<=k;j++){
			a[i+j]+=a[i];
			a[i+j]%=(1000000007);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		slove();
		cout<<a[n]<<endl;
		memset(a,0,sizeof(a));
	}

}

