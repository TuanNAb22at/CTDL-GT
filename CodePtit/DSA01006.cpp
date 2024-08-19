#include<bits/stdc++.h>
using namespace std;
int a[11],n,used[100]={0};
vector<int> v;
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				int tmp=0;
				for(int k=1;k<=n;k++){
					tmp=tmp*10+a[k];
				}
				v.push_back(tmp);
			}
			Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		memset(used,0,sizeof(used));
		v.clear();
		cin>>n;
		Try(1);
		for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
		cout<<endl;
	}
}