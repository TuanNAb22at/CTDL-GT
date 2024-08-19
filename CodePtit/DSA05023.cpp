#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long ans=0;
		for(int i=0;i<s.size();i++){
			string res="";
			for(int j=i;j<s.size();j++){
				res+=s[j];
				ans+=stoll(res);
			}

		}
		cout<<ans<<endl;
	}
}