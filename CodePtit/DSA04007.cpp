#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;cin>>k;
		string a,b;cin>>a>>b;
		long long s1=0,s2=0;
		int dem1=0,dem2=0;
		for(int i=a.size()-1;i>=0;i--){
			s1+=(a[i]-'0')*pow(k,dem1);
			dem1++;
		}
		for(int i=b.size()-1;i>=0;i--){
			s2+=(b[i]-'0')*pow(k,dem2);
			dem2++;
		}
		long long ans=s1+s2;
		vector<int> v;
		while(ans){
			v.push_back(ans%k);
			ans/=k;
		}
		for(int i=v.size()-1;i>=0;i--)	cout<<v[i];
		cout<<endl;
	}
}