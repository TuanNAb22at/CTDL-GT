#include<bits/stdc++.h>
using namespace std;
int main(){
		int t;
		cin>>t;
		queue<string> q;
		q.push("9");
		vector<long long> v;
		v.push_back(9);
		while(!q.empty()){
			string top=q.front();
			q.pop();
			if(top.size()==18) break;
			v.push_back(stoll(top+"0"));
			q.push(top+"0");
			v.push_back(stoll(top+"9"));
			q.push(top+"9");
		}
		
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