#include<bits/stdc++.h>
using namespace std;
void check(string s){
	stack<char> st;
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				st.push(s[i]);
			}
			else{
				if(st.empty()){
					cout<<"NO";
					return;
				}
				else st.pop();
			}
		}
		if(st.empty()) cout<<"YES";
		else cout<<"NO";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		check(s);
		cout<<endl;
	}
}