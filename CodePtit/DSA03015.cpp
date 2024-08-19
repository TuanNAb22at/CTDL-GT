#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,m;
		cin>>n>>s>>m;
		int k=s/7;
		if(s*m > (s-k)*n){
			cout<<-1;
		}
		else{
			int date=0;
			for(int i=1;i<=s;i++){
				date++;
				if(i*n>=s*m) break;
			}
			cout<<date;
		}
		cout<<endl;
	}
}