#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		long long res=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			res+=a[i]*i;
			res%=(1000000007);
		}
		cout<<res<<endl;
	}
}