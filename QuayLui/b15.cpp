#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001],ans,s;
bool visited[1001];

void Try(int sum,int cnt){
	if(cnt==k){
		ans=1;
		return;
	}
	if(ans) return;
	for(int j=1;j<=n;j++){
		if(!visited[j]){
			visited[j]=true;
			if(sum==s){
				Try(0,cnt+1);
			}
			else if(sum<s){
				Try(sum+a[j],cnt);
			}
		}
		visited[j]=false;
	}
}
void inp(){
	ans=0;s=0;
	cin>>n>>k;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		s+=a[i];
	}
	if(s%k){
		cout<<"0";
		return;
	}
	s/=k;
	Try(0,0);
	cout<<ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		cout<<endl;
	}
}