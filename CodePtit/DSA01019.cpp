#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int check=1;
			if(a[n]!=0 || a[1]!=1) check=0; 
			for(int j=2;j<=n;j++){
				if(a[j]==1 && a[j-1]==1) check=0;
			}
			if(check){
				for(int j=1;j<=n;j++){
					if(a[j]==1) cout<<"H";
					else cout<<"A";
				}
				cout<<endl;
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
		Try(1);
	}
}