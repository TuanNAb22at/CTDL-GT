#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int d;cin>>d;
		string s;
		cin>>s;
		map<char,int> mp;
		int res=0;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
			res=max(res,mp[s[i]]);
		}
		if((res-1)*(d-1) > s.size() - res) cout<<-1;  // cac ky tu khac max ma nho hon so khoang trong o giua
		else cout<<1;
		cout<<endl;
	}
}