#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		string s,k;cin>>s>>k;
		reverse(begin(s),end(s));
		reverse(begin(k),end(k));
		long long res1=0,res2=0;
		for(int i=0;i<s.size();i++){
			res1+=(s[i]-'0')*pow(2,i);
		}
		for(int i=0;i<k.size();i++){
			res2+=(k[i]-'0')*pow(2,i);
		}
		cout<<(long long)(res1*res2)<<endl;
	}
}