#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=0;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x==0) ++ans;
		}
		cout<<ans<<endl;
	}
}