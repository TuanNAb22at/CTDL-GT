#include<bits/stdc++.h>
using namespace std;
int a[21][21],cot[100],x[100],n;
int kq;
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
				kq=max(kq,sum);
			}
			Try(i+1);
			cot[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		inp();
		kq=0;
		Try(1);
		cout<<kq<<endl;
	}
}