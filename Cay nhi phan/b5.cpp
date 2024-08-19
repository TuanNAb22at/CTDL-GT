#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	if(s=="+" || s=="-" || s=="*"||s=="/") return false;
	return true;
}
vector<string> v;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		stack<string> st;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			v.push_back(s);
		}
		if(!check(v[v.size()-1])){
			for(int i=0;i<v.size();i++){
				if(check(v[i])){
					st.push(v[i]);
				}
				else{
					string o1=st.top();st.pop();
					string o2=st.top();st.pop();
					if(v[i]=="+"){
						st.push(to_string(stoll(o1) + stoll(o2)));
					}
					if(v[i]=="-"){
						st.push(to_string(stoll(o2) - stoll(o1)));
					}
					if(v[i]=="*"){
						st.push(to_string(stoll(o1) * stoll(o2)));
					}
					if(v[i]=="/"){
						st.push(to_string(stoll(o2) / stoll(o1)));
					}
				}
			}
			cout<<st.top();
		}
		else{
			for(int i=v.size()-1;i>=0;i--){
				if(check(v[i])){
					st.push(v[i]);
				}
				else{
					string o1=st.top();st.pop();
					string o2=st.top();st.pop();
					if(v[i]=="+"){
						st.push(to_string(stoll(o1) + stoll(o2)));
					}
					if(v[i]=="-"){
						st.push(to_string(stoll(o1) - stoll(o2)));
					}
					if(v[i]=="*"){
						st.push(to_string(stoll(o1) * stoll(o2)));
					}
					if(v[i]=="/"){
						st.push(to_string(stoll(o1) / stoll(o2)));
					}
				}
			}
			cout<<st.top();
		}
		cout<<endl;
		v.clear();
	}
}