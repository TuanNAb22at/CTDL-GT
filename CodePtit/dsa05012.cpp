#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
ll a[1001][1001];
void ckn(){
	a[0][0]=a[1][0]=a[1][1]=1;
	for(int i=2;i<=1000;i++){
		for(int j=0;j<=1000;j++){
			if(i==j ||j==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				a[i][j]%=(1000000007);
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	ckn();
	while(t--){
		cin>>n>>k;
		cout<<a[n][k]<<endl;
	}

}

