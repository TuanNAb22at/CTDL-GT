#include<bits/stdc++.h>
using namespace std;
int n,k,s,ans;
int a[25];
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int sum=0;
			for(int j=1;j<=k;j++){
				sum+=a[j];
			}
			if(sum==s){
				ans++;
			}
		}
		else Try(i+1);
	}
}
int main(){
	
	while(1){
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0) break;
		ans=0;
		Try(1);
		cout<<ans<<endl;
		
	}
}