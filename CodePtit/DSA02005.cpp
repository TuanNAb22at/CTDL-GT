#include<bits/stdc++.h>
using namespace std;
int a[20],n;
string s;
int used[20]={0};
void inp(){
	cin>>s;
	n=s.size();
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				for(int j=1;j<=n;j++){
					cout<<s[a[j]-1];
				}
				cout<<" ";
			}
			Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		Try(1);
		for(int i=1;i<=n;i++){
			a[i]=0;
		}
		cout<<endl;
	}
}