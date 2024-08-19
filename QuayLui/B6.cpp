#include<bits/stdc++.h>
using namespace std;
int a[11],n,k,x[11],ok;
void Try(int sum,int i,int pos){
	if(sum==k){
		ok=1;
		cout<<"[";
		for(int	j=1;j<i;j++){
			cout<<x[j];
			if(j==i-1) cout<<"] ";
			else cout<<" ";
		}
		return;
	}
	else{
		for(int j=pos;j<=n;j++){
			if(sum+a[j]<=k){
				x[i]=a[j];
				Try(sum+a[j],i+1,j+1);
			}		
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ok=0;
		Try(0,1,1);
		cout<<endl;
	}
}