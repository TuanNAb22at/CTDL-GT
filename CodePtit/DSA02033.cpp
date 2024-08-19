#include<bits/stdc++.h>
using namespace std;
int a[100],n;
bool used[100];
void inp(){
	cin>>n;
	memset(used,false,sizeof(used));
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=true;
			if(i==n){
				int kt=1;
				for(int j=1;j<=n-1;j++){
					if(a[j]==a[j+1]+1 || a[j]==a[j+1]-1) kt=0;
				}
				if(kt){
					for(int j=1;j<=n;j++){
						cout<<a[j];
					}
					cout<<endl;
				}
			}
			else Try(i+1);
			used[j]=false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		inp();
		Try(1);
	}
}