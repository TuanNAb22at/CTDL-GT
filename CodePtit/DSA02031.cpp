#include<bits/stdc++.h>
using namespace std;
char c;
int n,a[100];
bool used[100];
void inp(){
	cin>>c;
	n=(int)c-64;
	memset(used,false,sizeof(used));
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i]=j;
			used[j]=true;
			if(i==n){
				if(n<=4){
					bool kt=false;
					if((char)(a[n]+64)=='A'|| (char)(a[1]+64)=='A') kt=true;
					if(kt){
						for(int j=1;j<=n;j++){
							cout<<(char) (a[j]+64);
						}
						cout<<endl;
					}
				}
				else{
					bool kt=false;
					if((char)(a[1]+64)=='A' && (char)(a[n]+64)=='E') kt=true;
					if((char)(a[1]+64)=='E' && (char)(a[n]+64)=='A') kt=true;
					for(int j=2;j<n;j++){
						if( (char)(a[j]+64)=='A' && ( (char)(a[j+1]+64)=='E' || (char)(a[j-1]+64)=='E')) kt=true;
						if( (char)(a[j]+64)=='E' && ( (char)(a[j+1]+64)=='A' || (char)(a[j-1]+64)=='A')) kt=true;
					}
					if(kt){
						for(int j=1;j<=n;j++){
							cout<<(char) (a[j]+64);
						}
						cout<<endl;
					}
				}
			}
			else Try(i+1);
			used[j]=false;
		}
	}
}
int main(){
	inp();
	Try(1);
}