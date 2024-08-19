#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int s,t;
		cin>>s>>t;
		queue<pair<int,int>> q;
		q.push({s,0});
		set<int> se;
		se.insert(s);
		while(1){
			pair<int,int> top=q.front();
			q.pop();
			if(top.first==t){
				cout<<top.second<<endl;
				break;
			}
			int k=top.first;
			if(se.find(k*2)==se.end() && k<t){
				q.push({k*2,top.second+1});
				se.insert(k*2);
			}
			if(se.find(k-1)==se.end() && k>1 ){
				q.push({k-1,top.second+1});
				se.insert(k-1);
			}
		}
		
	}
}