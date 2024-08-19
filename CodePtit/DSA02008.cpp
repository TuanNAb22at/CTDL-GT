#include<bits/stdc++.h>
using namespace std;
int a[21][21],cot[100],x[100],n,k1;
int cnt=0;
vector<string> v;
void inp(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	memset(cot,0,sizeof(cot));
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0){
			x[i]=j;
			cot[j]=1;
			if(i==n){
				int sum=0;
				for(int k=1;k<=n;k++){
					sum+=a[k][x[k]];
				}
				if(sum==k1){
					string res="";
					++cnt;
					for(int k=1;k<=n;k++){
						res+=to_string(x[k]);
						res+=" ";
					}
					v.push_back(res);
				}
			}
			Try(i+1);
			cot[j]=0;
		}
	}
}
int main(){

		cin>>n>>k1;
		inp();
		Try(1);
		cout<<cnt<<endl;
		for(string x:v){
			cout<<x<<endl;
		}
	
}