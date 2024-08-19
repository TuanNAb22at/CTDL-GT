#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long ans=0;
		int res=0;
		stack<int> st;
		st.push(-1);
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st.push(i);
			}
			else{
				st.pop();
				if(st.size()>0){
					res=max(res,i-st.top());
				}
				if(st.size()==0) st.push(i);
			}
		}
		cout<<res<<endl;
	}
}