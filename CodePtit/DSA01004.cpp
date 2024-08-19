#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int j=1;j<=k;j++) cout<<a[j];
			cout<<" ";
		}
		else Try(i+1);
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		for(int i=1;i<=k;i++) a[i]=0;
		cout<<endl;
	}
}