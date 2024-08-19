#include<bits/stdc++.h>
using namespace std;
void sinh(string s){
	int ok=1;
	int i=s.size()-1;
	while(i>-1 && s[i]=='1'){
		s[i]='0';
		--i;
	}
	if(i==-1){
		for(int i=0;i<s.size();i++) cout<<"0";
		ok=0;
	}
	else{
		s[i]='1';
	}
	if(ok){
		for(int i=0;i<s.size();i++) cout<<s[i];
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){	
		string s;
		cin>>s;
		sinh(s);
		cout<<endl;
	}
}