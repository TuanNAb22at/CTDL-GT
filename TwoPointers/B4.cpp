#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long s;cin>>s;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=0,r=0;
	long long sum=0,ans=0,check=0;
	for(r=0;r<n;r++){
		sum+=a[r];
		if(sum>=s) check=1;
		while(sum>s){
			sum-=a[l];
			++l;
		}
		ans=max(ans,(long long)r-l+1);
	}
	if(check) cout<<ans;
	else cout<<-1;
}