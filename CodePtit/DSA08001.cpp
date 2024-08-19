#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<int> q;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x==1){
				cout<<q.size()<<endl;
			}
			if(x==2){
				if(q.empty()){
					cout<<"YES";
				}
				else cout<<"NO";
				cout<<endl;
			}
			if(x==3){
				int k;cin>>k;
				q.push(k);
			}
			if(x==4){
				if(!q.empty()){
					q.pop();
				}
			}
			if(x==5){
				if(!q.empty()){
					cout<<q.front()<<endl;
				}
				else cout<<-1<<endl;
			}
			if(x==6){
				if(!q.empty()){
					cout<<q.back();
				}
				else cout<<-1;
				cout<<endl;
			}
		}
	}
}