#include<bits/stdc++.h>
using namespace std;
int a[100],n,s;
vector<string> v;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			string res="";
			for(int j=1;j<=n;j++){
				res+=(a[j]+'0');
			}
			v.push_back(res);
		}
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int ok=0;
		vector<string> k;
		cin>>n>>s;
		int x[n];
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		sort(x,x+n);
		Try(1);
		for(int i=v.size()-1;i>=0;i--){
			int res=0;
			for(int j=0;j<v[i].size();j++){
				if(v[i][j]=='1'){
					res+=x[j];
				}
			}
			if(res==s){
				ok=1;
				string res="";
				res+="[";
				for(int j=0;j<v[i].size();j++){
					if(v[i][j]=='1'){
						res+=to_string(x[j]);
						res+=" ";
					}
				}
				res.pop_back();
				res+="]";
				k.push_back(res);
			}
		}
		for(string x:k){
			cout<<x<<" ";
		}
		if(ok==0) cout<<-1;
		cout<<endl;
		v.clear();
	}
}