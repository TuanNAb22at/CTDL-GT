#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<string> v;
set<string> se;
string s;
int a[100];
int used[100]={0};

void Try(int i){
	for(int j=a[i-1]+1;j<=v.size()-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int j=1;j<=k;j++){
				cout<<v[a[j]-1]<<" ";
			}
			cout<<endl;
		}
		else Try(i+1);
	}
}
int main() {
	cin>>n>>k;
	cin.ignore();
	getline(cin,s);
	string tmp;
	stringstream ss(s);
	while(ss>>tmp){
		se.insert(tmp);
	}
	for(auto x:se){
		v.push_back(x);
	}
	Try(1);
	
}