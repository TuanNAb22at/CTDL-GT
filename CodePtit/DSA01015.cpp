#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<string> q;
	vector<long long> v;
	v.push_back(9);
	q.push("9");
	while(1){
		string top=q.front();q.pop();
		if(top.size()==15) break;
		string a=top+"0";
		v.push_back(stoll(a));
		string b=top+"9";
		v.push_back(stoll(b));
		q.push(a);q.push(b);
	}
	int t;
	cin>>t;
	while(t--){
		int n,ok=0;
		cin>>n;
		for(long long x:v){
			if(x%n==0){
				cout<<x;
				ok=1;
				break;
			}
		}
		cout<<endl;
	}
}