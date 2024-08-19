#include<bits/stdc++.h>
using namespace std;
int n,k,sum,ans;
int a[25],x[25];
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int s=0;
			for(int j=1;j<=n;j++){
				if(a[j]==1){
					s+=x[j];
				}
			}
			if(s==sum){
				++ans;
			}
		}
		else Try(i+1);
	}
}

void inp(){
	ans=0;
	int m=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		m+=x[i];
	}
	if(m%k!=0){
		cout<<0;
		return;
	}
	else{
		sum=m/k;
		Try(1);
		if(ans==k) cout<<1;
		else cout<<0;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		cout<<endl;
	}
}