#include<bits/stdc++.h>
using namespace std;
int a[100],n,ok,x[100];
void kt(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		ok=0;	
	}
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
	
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int dem=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>x[i];
		ok=1;
		kt();
		while(1){
			++dem;
			if(ok==0) break;
			int d=0;
			for(int i=1;i<=n;i++){
				if(a[i]==x[i]){
					++d;
				}
			
			}
			if(d==n){
				cout<<dem<<endl;
				break;
			}
			sinh();
		}
	}
}