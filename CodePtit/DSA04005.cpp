#include<bits/stdc++.h>

using namespace std;

long long f[93];
void init(){
	f[1]=1;
	f[2]=1;
	for(int i=3;i<=92;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
char kt(int n,long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=f[n-2]){
		return kt(n-2,k);
	}
	else {
		return kt(n-1,k-f[n-2]);
	}
}
int main(){
	int t;
	cin>>t;
	init();
	while(t--){
		int n;long long k;
		cin>>n>>k;
		cout<<kt(n,k)<<endl;
	}
}