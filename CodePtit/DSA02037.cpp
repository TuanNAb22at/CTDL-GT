#include<bits/stdc++.h>
using namespace std;

int n,a[100],k,x[100];
vector<string> v;
bool nt(int n){
	if(n<=1) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int sum=0;
			for(int j=1;j<=n;j++){
				if(a[j]==1){
					sum+=x[j];
				}
			}
			if(nt(sum)){
				string res="";
				for(int j=1;j<=n;j++){
					if(a[j]==1){
						res+=to_string(x[j]);
						res+=" ";
					}
				}
				v.push_back(res);
			}
		}
		else Try(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>x[i];
		sort(x+1,x+n+1,greater<int>());
		Try(1);
		for(string x:v){
			cout<<x<<endl;
		}
		v.clear();
	}
}