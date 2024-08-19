#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string res="";
		int ans=1;
		for(int i=0;i<s.size();i++){
			string res="";
			for(int j=i;j<s.size();j++){
				res+=s[j];
				if(check(res)){
					int k=res.size();
					ans=max(ans,k);
				}
			}

		}
		cout<<ans<<endl;
	}
}