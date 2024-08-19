#include<bits/stdc++.h>
using namespace std;
string s;
long long res;
int a[20],x[20],dem,ok;
void inp(){
	cin>>s;
	for(int i=1;i<=s.size();i++){
		dem++;
		a[i]=s[i-1]-'0';
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==dem){
			long long ans=0,ok=0;
			for(int j=1;j<=dem;j++){
				if(x[j]==1){
					if(a[j]==0) ok=1;
					ans=ans*10+a[j];
				}
			}
			if(ok==0 && ans==0){
				ans=-1;
			}
			int u=round(cbrt(ans));
			if(u*u*u==ans){
				res=max(res,ans);
			}
		}
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		dem=0;
		inp();
		res=-1;
		Try(1);
	 	cout<<res<<endl;
	}
}