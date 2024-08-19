#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void sinh(){
	int check=1;
	int i=n-1;
	while(i>0 && a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		check=0;
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
	}
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
	if(check){
		for(int j=1;j<=n;j++){
			cout<<a[j]<<" ";
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sinh();
		cout<<endl;
	}
}