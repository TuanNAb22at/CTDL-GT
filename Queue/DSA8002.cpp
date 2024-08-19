#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> dq;
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int x;cin>>x;
			dq.push(x);
		}
		else if(s=="PRINTFRONT"){
			if(!dq.empty()){
				cout<<dq.front();
			}
			else cout<<"NONE";
		}
		else{
			if(!dq.empty()){
				dq.pop();
			}
		}
		cout<<endl;
	}
}