#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void sinh(){
	int check=1;
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0){
		for(int i=1;i<=k;i++){
			cout<<i<<" ";
		}
		check=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
	if(check){
		for(int j=1;j<=k;j++){
			cout<<a[j]<<" ";
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		sinh();
		cout<<endl;
	}
}