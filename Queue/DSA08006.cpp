#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		vector<long long> v;
		queue<string> q;
		q.push("9");
		v.push_back(9);
		while(1){
			string x=q.front();
			q.pop();
			if(x.size()==15) break;
			string a=x+"0";
			v.push_back(stoll(a));
			q.push(a);
			string b=x+"9";
			v.push_back(stoll(b));
			q.push(b);
		}
		for(long long x:v){
			if(x%n==0){
				cout<<x;
				break;
			}
		}
		cout<<endl;
	}
}