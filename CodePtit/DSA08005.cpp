#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("1");
		vector<long long> v;
		v.push_back(1);
		while(!q.empty()){
			string top=q.front();
			q.pop();
			if(top.size()==15) break;
			v.push_back(stoll(top+"0"));
			q.push(top+"0");
			v.push_back(stoll(top+"1"));
			q.push(top+"1");
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;	
	}
}