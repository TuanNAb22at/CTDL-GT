#include<bits/stdc++.h>
using namespace std;
int p[1000005];
void sang(){
	for(int i=0;i<=1000000;i++){
		p[i]=1;
	}
	p[0]=p[1]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(p[i]){
			for(int j=i*i;j<=1000000;j+=i){
				p[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int ok=0;
		for(int i=1;i<=1000000;i++){
			if(p[i] && n-i>0 && p[n-i]){
				ok=1;
				cout<<i<<" "<<n-i;
				break;
			}
		}	
		if(ok==0){
			cout<<"-1";
		}
		cout<<endl;
	}
}