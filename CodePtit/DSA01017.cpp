#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,k="";
		cin>>s;
		k+=s[0];
		for(int i=1;i<s.size();i++){
			if(s[i-1]=='0') k+=s[i];
			else if(s[i-1]!='0'){
				if(s[i]=='1') k+="0";
				else k+="1";
			}
		}
		cout<<k<<endl;
	}
}