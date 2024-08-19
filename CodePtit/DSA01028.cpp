#include<bits/stdc++.h>
using namespace std;
int a[5000],n,x[5000],k;
set<int> se;
vector<int> v;
void inp(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		se.insert(x[i]);
	}
	for(int x:se){
		v.push_back(x);
	}
}
void Try(int i){
	for(int j=a[i-1]+1;j<=v.size()-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int j=1;j<=k;j++) cout<<v[a[j]-1]<<" ";
			cout<<endl;
		}
		else Try(i+1);
	}
}
int main(){
	inp();
	Try(1);
}