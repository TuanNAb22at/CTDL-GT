#include<bits/stdc++.h>
using namespace std;
int a[100],n,used[100]={0};
string s;
void Try(int i){
	for(int j=1;j<=s.size();j++){
		if(!used[j]){
			a[i]=j;
			used[j]=1;
			if(i==s.size()){
				for(int j=1;j<=s.size();j++){
					cout<<s[a[j]-1];
				}
				cout<<" ";
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		Try(1);
		cout<<endl;
	}
}