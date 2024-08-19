#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> v;
	queue<string> q;
	q.push("6");
	q.push("8");
	v.push_back("6");
	v.push_back("8");
	while(1){
		string top=q.front();q.pop();
		if(top.size()>15) break;
		v.push_back(top+"6");
		v.push_back(top+"8");
		q.push(top+"6");
		q.push(top+"8");
	}
	reverse(begin(v),end(v));
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=0;
		vector<string> v1;
		for(int i=v.size()-1;i>=0;i--){
			if(v[i].size()>n){
				break;
			}
			else {
				++ans;
				v1.push_back(v[i]);
			}
		}
		cout<<ans<<endl;
		for(int i=v1.size()-1;i>=0;i--){
			cout<<v1[i]<<" ";
		}
		cout<<endl;
	}
}