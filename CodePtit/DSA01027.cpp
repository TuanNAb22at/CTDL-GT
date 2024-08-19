#include<bits/stdc++.h>
using namespace std;
int a[20],n,x[20];
int used[20]={0};
void inp(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>x[i];
	sort(x+1,x+n+1);
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				for(int j=1;j<=n;j++){
					cout<<x[a[j]]<<" ";
				}
				cout<<endl;
			}
			Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	inp();
	Try(1);
}