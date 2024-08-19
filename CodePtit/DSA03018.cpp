#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x,y;
		int ok=0;
		for(int i=0;i<=n;i++){
			if((n-4*i)>=0&&(n-4*i)%7==0){
				y=(n-4*i)/7;
				x=i;
				ok=1;
				break;
			}
		}
		if(ok){
			for(int i=1;i<=x;i++) cout<<4;
			for(int i=1;i<=y;i++) cout<<7;
		}
		else cout<<-1;
		cout<<endl;
	}
}