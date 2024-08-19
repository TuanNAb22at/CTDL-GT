#include<bits/stdc++.h>
using namespace std;
bool mod(string s,int n){
	int res=0;
	for(int i=0;i<s.size();i++){
		res=(res*10+s[i]-'0');
		res%=n;
	}
	if(res==0) return true;
	else return false;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("1");
		while(1){
			string top=q.front();
			q.pop();
			if(mod(top,n)){
				cout<<top<<endl;
				break;
			}
			q.push(top+"0");
			q.push(top+"1");
		}
	}
		

}