#include<bits/stdc++.h>
using namespace std;
int a[20],n;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int ok=1;
			if(a[1]!=1 || a[n]!=0) ok=0;
			for(int j=2;j<=n;j++){
				if(a[j] == 1 && a[j-1] == 1) ok=0;
			}
			for(int j=4;j<=n;j++){
				if(a[j]==0 && a[j-1]==0 && a[j-2]==0 && a[j-3]==0) ok=0;
			}
			if(ok){
				for(int j=1;j<=n;j++){
					if(a[j]==1) cout<<8;
					else cout<<6;
				}
				cout<<endl;
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	Try(1);
}