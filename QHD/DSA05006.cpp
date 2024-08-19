#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int ans=0;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int l[n]={0};
	for(int i=0;i<n;i++) l[i]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				l[i]=max(l[i],l[j]+1);
				if(l[i]==k) ++ans;
			}
		}
	}
	cout<<ans;
}