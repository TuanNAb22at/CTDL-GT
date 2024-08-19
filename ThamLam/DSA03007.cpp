#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		priority_queue<long long> q1;
		priority_queue<long long,vector<long long>,greater<long long>> q2;
		int n;cin>>n;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			q1.push(x);
		}
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			q2.push(x);
		}
		long long ans=0;
		while(!q1.empty()){
			long long a=q1.top();
			q1.pop();
			long long b=q2.top();
			q2.pop();
			ans+=(a*b);
		}
		cout<<ans<<endl;
	}
}