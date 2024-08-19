#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int m=10000000,x,y;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(abs(a[i]+a[j])<m){
					m=abs(a[i]+a[j]);
					x=a[i];
					y=a[j];
				}
			}
		}
		cout<<x+y<<endl;	
		
	}
}