#include<bits/stdc++.h>
using namespace std;
int n,a[100];
int check(int a[],int n){
	int l=1,r=n;
	while(l<=r){
		if(a[l]!=a[r]) return 0;
		++l;--r;
	}
	return 1;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int ok=check(a,n);
			if(ok==1){
				for(int j=1;j<=n;j++){
					cout<<a[j]<<" ";
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