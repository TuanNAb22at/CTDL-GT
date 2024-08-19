#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;cin>>s;
		for(int i=0;i<s.size();i++){
			for(int j=0;j<s.size();j++){
				cout<<s[j]<<" ";
			}
			cout<<endl;
		}
	}
}