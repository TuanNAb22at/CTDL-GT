#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;cin>>s;
		stack<char> st;
		bool ok=true;
		for(int i=0;i<s.size();i++){
			if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
				st.push(s[i]);
			}
			else{
				if(s[i]==']'){
					if(st.empty()) ok=false;
					else if(st.top()=='[') st.pop();
				}
				if(s[i]=='}'){
					if(st.empty()) ok=false;
					else if(st.top()=='{') st.pop();
				}
				if(s[i]==')'){
					if(st.empty()) ok=false;
					else if(st.top()=='(') st.pop();
				}
			}
			
		}
		if(!st.empty()){
			ok=false;
		}
		if(ok){
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}
}