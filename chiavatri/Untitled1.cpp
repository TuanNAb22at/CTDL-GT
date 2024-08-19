#include<bits/stdc++.h>
using namespace std;
long long fb[93];

void fibo(){
	fb[1]=1;
	fb[2]=1;
	for(int i=3;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}

char NP(int n,long long k){
	if(n==1) return '0';
	if(n==2) return '1';
	if(k<=fb[n-2]) return NP(n-2,k);
	else return NP(n-1,k-fb[n-2]);
}
int main(){
	int t;
	cin>>t;
	fibo();
	while(t--){
		int n;long long k;
		cin>>n>>k;
		cout<<NP(n,k)<<endl;
	}
}