#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
		queue<string> q;
		q.push("1");
		vector<long long> v;
		v.push_back(1);
		while(!q.empty()){
			string top=q.front();
			q.pop();
			if(top.size()==18) break;
			v.push_back(stoll(top+"0"));
			q.push(top+"0");
			v.push_back(stoll(top+"1"));
			q.push(top+"1");
		}
	while(t--){
		long long n;cin>>n;
		long long ans=0;
		for(int i=0;i<v.size();i++){
			if(n>=v[i]){
				ans++;
			}
			else break;
		}
		cout<<ans<<endl;	
	}
}