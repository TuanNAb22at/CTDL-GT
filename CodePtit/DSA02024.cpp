#include<bits/stdc++.h>
using namespace std;
int n;
int a[20],x[20];
vector<string> v;
bool check(vector<int> v){
	for(int i=1;i<v.size();i++){
		if(v[i]<v[i-1]) return false;
	}
	return true;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			int dem=0;
			for(int j=1;j<=n;j++){
				if(x[j]==1){
					dem++;
				}
			}
			if(dem>=2){
				string res="";
				vector<int> v1;
				for(int j=1;j<=n;j++){
					if(x[j]==1){
						v1.push_back(a[j]);
					}
				}
				int ok=1;
				for(int j=0;j<v1.size()-1;j++){
					if(v1[j]>v1[j+1]){
						ok=0;
					}
				}
				if(ok==1){
					for(int j=1;j<=n;j++){
						if(x[j]==1){
							res+=to_string(a[j]);
							res+=" ";
						}
					}
					res.pop_back();
					v.push_back(res);
				}
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	Try(1);
	sort(begin(v),end(v));
	for(string x:v){
		cout<<x<<endl;
	}
}