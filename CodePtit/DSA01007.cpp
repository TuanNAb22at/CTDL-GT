#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			for(int j=1;j<=n;j++){
				if(a[j]==0) cout<<"A";
				else cout<<"B";
			}
			cout<<" ";
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
		cout<<endl;
	}
}