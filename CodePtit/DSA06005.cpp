#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		set<int> se1,se2;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se1.insert(a[i]);
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			se1.insert(b[i]);
		}
		sort(a,a+n);
		sort(b,b+m);
		int i=0,j=0;
		while(i<n && j<m){
			if(a[i]==b[j]){
				se2.insert(a[i]);
				++i;++j;
			}
			else if(a[i]<b[j]){
				i++;
			}
			else{
				j++;
			}
		}
		for(int x:se1) cout<<x<<" ";
		cout<<endl;
		for(int x:se2) cout<<x<<" ";
		cout<<endl;
		
	}
}