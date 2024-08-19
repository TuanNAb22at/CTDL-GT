#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<string> q;
	q.push("1");
	vector<long long> v;
	v.push_back(1);
	while(1){
		string top=q.front();q.pop();
		if(top.size()==16) break;
		v.push_back(stoll(top+"0"));
		v.push_back(stoll(top+"1"));
		q.push(top+"0");
		q.push(top+"1");
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<v.size();i++){
			if(v[i]%n==0){
				cout<<v[i];
				break;
			}
		}
		cout<<endl;
	}
}