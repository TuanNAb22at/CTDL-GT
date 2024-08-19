#include<bits/stdc++.h>
using namespace std;

int a[11],n;

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			vector<int> v;
			v.push_back(a[1]);
			for(int j=2;j<=n;j++){
				if(a[j]==a[j-1]){
					v.push_back(0);
				}
				else v.push_back(1);
			}
			for(int x:v){
				cout<<x;
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