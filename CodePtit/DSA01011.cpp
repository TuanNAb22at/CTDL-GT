#include<bits/stdc++.h>
using namespace std;
string s;
void sinh(){
	int check=1;
	int i=s.size()-2;
	while(i>-1 && s[i]>=s[i+1]){
		--i;
	}
	if(i==-1){
		check=0;
		cout<<"BIGGEST";
	}
	else{
		int j=s.size();
		while(s[i]>=s[j]) --j;
		swap(s[i],s[j]);
		reverse(begin(s)+i+1,end(s));
	}
	if(check){
		for(int j=0;j<s.size();j++){
			cout<<s[j];
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int x;cin>>x;
		cin>>s;
		cout<<x<<" ";
		sinh();
		cout<<endl;
	}
}