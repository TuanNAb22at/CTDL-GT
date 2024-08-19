#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ok=0;
		int n1,n2,n3;cin>>n1>>n2>>n3;
		int a[n1],b[n2],c[n3];
		map<int,int> mp1,mp2,mp3;
		for(int i=0;i<n1;i++)
		{
			cin>>a[i]; mp1[a[i]]++;
		}
		for(int i=0;i<n2;i++){
			cin>>b[i]; mp2[b[i]]++;
		}
		for(int i=0;i<n3;i++){
			cin>>c[i];
			mp3[c[i]]++;
		}
		
		for(int i=0;i<n1;i++){
			if(mp1[a[i]] >= 1 && mp2[a[i]] >= 1 && mp3[a[i]]>=1 && mp1[a[i]]!=0){
				int x=min(mp1[a[i]],min(mp2[a[i]],mp3[a[i]]));
				ok=1;
				for(int j=0;j<x;j++){
					cout<<a[i]<<" ";
				}
				mp1[a[i]]=0;
			}
		}
		if(ok==0) cout<<"NO";
		cout<<endl;
		
	}
}