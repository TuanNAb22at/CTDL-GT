#include<bits/stdc++.h>
using namespace std;
int a[16],d,n,k,used[100]={0};
int x[16];
char c;
vector<string> v,v1;
void Try1(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			string res="";
			for(int j=1;j<=k;j++){
				res+=to_string(x[j]);
			}
			v.push_back(res);
		}
		else Try1(i+1);
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				string res="";
				for(int k=1;k<=n;k++){
					res+=(char)(96+ a[k]);
				}
				v1.push_back(res);
			}
			Try(i+1);
			used[j]=0;
		}
	}
}
int main(){
	cin>>n>>k>>c;
	Try1(1);
	n=(int)c-96;
	Try(1);
	for(string x:v1){
		for(string x1:v){
			cout<<x<<x1<<endl;
		}
	}
}