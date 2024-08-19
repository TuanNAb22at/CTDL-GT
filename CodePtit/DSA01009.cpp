#include<bits/stdc++.h>
using namespace std;
int n,k,ans=0;
int a[100];
vector<string> v;
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			int dem=1,cnt=0;
			for(int j=1;j<=n-1;j++){
				if(a[j]==0 && a[j+1]==0){
					dem++;
				}
				else{
					dem-=k;
					if(dem==0){
						cnt++;
					}
					dem=1;
				}
			}
			if(dem==k) cnt++;
			if(cnt==1){
				ans++;
				string res="";
				for(int j=1;j<=n;j++){
					if(a[j]==1) res+="B";
					else res+="A";
				}
				v.push_back(res);
			}	
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	Try(1);
	cout<<ans<<endl;
	for(string x:v){
		cout<<x<<endl;
	}
}