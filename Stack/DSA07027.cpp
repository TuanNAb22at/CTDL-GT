#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n+1],b[n+1];
		stack<int> st;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		
		for(int i=n;i>=1;i--){
			while(!st.empty() && a[i] >= st.top()) {
				st.pop();
			}
			if(st.empty()) b[i]=-1;
			else b[i]=st.top();
			st.push(a[i]);
		}
		for(int i=1;i<=n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}