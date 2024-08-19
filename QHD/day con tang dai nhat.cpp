#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int l[1000]={0};
	for(int i=0;i<s.size();i++) l[i]=1;
	for(int i=0;i<s.size();i++){
		for(int j=0;j<i;j++){
			if(s[i]>=s[j]){
				l[i]=max(l[i],l[j]+1);
			}
		}
	}
	cout<<*max_element(l,l+s.size());
}