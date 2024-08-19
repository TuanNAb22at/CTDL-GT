#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> v;
	queue<string> q;
	q.push("1");v.push_back("1");
	while(1){
		if(v.size()>10000) break;
		string x=q.front()+"0";
		string y=q.front()+"1";
		q.push(x);
		v.push_back(x);
		q.push(y);
		v.push_back(y);
		q.pop();
	}
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}