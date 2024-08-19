#include<bits/stdc++.h>
using namespace std;
int kq(string x,string y){
	int n=x.size(),m=y.size();
	int f[n+1][m+1];
	for(int i=0;i<=n;i++){
			for(int j=0;j<=m;j++){
				if(i==0 || j==0) f[i][j]=0;
				else{
					if(x[i-1]==y[j-1]){
						f[i][j]=f[i-1][j-1]+1;
					}
					else{
						f[i][j]=max(f[i-1][j],f[i][j-1]);
					}
				}
			}
		}
	return f[n][m];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		string s1,s2,s3;cin>>s1>>s2>>s3;
		cout<<kq(s1,s2)<<" "<<kq(s1,s3)<<" "<<endl;
		cout<<kq(s2,s1)<<" "<<kq(s2,s3)<<" "<<endl;
		cout<<kq(s3,s1)<<" "<<kq(s3,s2)<<" "<<endl;
	}
}