#include<bits/stdc++.h>
using namespace std;
int a[100],x[100],n,k,ok;
void kt(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
	
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>x[i];
		kt();
		ok=1;
		int dem=0;
		while(ok){
			dem++;
			int cnt=0;
			for(int i=1;i<=k;i++){
				if(a[i]==x[i]) cnt++;
			}
			if(cnt==k){
				cout<<dem<<endl;
				break;
			}
			sinh();
		}
	}
}