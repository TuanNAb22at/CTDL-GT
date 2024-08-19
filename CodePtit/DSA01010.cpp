#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,dem=0;
vector<int> v,v1;
void sinh(){
	int check=1;
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0){
		cout<<k;
		check=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
	if(check){
		for(int j=1;j<=k;j++){
			v.push_back(a[j]);
		}
		for(int i=0;i<v.size();i++){
			int check=0;
			for(int j=0;j<v1.size();j++){
				if(v[i]==v1[j]){
					check=1;
				}
			}
			if(check==0) dem++;
		}
		cout<<dem;
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		dem=0;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			v1.push_back(a[i]);
		}
		sinh();
		cout<<endl;
		v.clear();
		v1.clear();
	}
}