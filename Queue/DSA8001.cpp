#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		queue<int> q;
		int x;
		cin>>x;
		while(x--){
			int n;
			cin>>n;
			if(n==1){
				cout<<q.size();
			}
			else if(n==2){
				if(q.empty()) cout<<"YES";
				else cout<<"NO";
				cout<<endl;
			}
			else if(n==3){
				int x;cin>>x;
				q.push(x);
			}
			else if(n==4){
				if(!q.empty()){
					q.pop();
				}
			}
			else if(n==5){
				if(!q.empty()){
					cout<<q.front();
					cout<<endl;
				}
			}
			else if(n==6){
				if(!q.empty()){
					cout<<q.back();
					cout<<endl;
				}
			}
		}
		cout<<endl;
	}
}