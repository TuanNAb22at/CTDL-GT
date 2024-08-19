#include<bits/stdc++.h>
using namespace std;

int n,a[100],k,x[100];

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int j=1;j<=k;j++){
				cout<<x[a[j]]<<" ";
			}
			cout<<endl;
		}
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>x[i];
		sort(x+1,x+n+1);
		Try(1);
	}
}