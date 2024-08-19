#include<bits/stdc++.h>
using namespace std;
int n,a[100],x[100],k,ans=0;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int sum=0;
			for(int j=1;j<=n;j++){
				if(a[j]==1) sum+=x[j];
			}
			if(sum==k){
				++ans;
				for(int j=1;j<=n;j++){
					if(a[j]==1) cout<<x[j]<<" ";
				}
				cout<<endl;
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	Try(1);
	cout<<ans;
}