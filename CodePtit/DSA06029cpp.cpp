#include <bits/stdc++.h>

using namespace std;
vector<string> v;
void insertionSort(int a[],int n) {
    for (int i = 1; i <= n; i++) {
    	int x=a[i],pos=i-1;
       	while(pos>=1 && a[pos]>x){
       		a[pos+1]=a[pos];
       		--pos;
	   }
	   	a[pos+1]=x;
	   	string res="";
	   	res+="Buoc "+to_string(i-1)+": ";
	   	
	   	for(int j=1;j<=i;j++){
	   		res+=to_string(a[j]);
	   		res+=" ";
	   	}
	   	v.push_back(res);
    }
    for(int i=v.size()-1;i>=0;i--){
    	cout<<v[i]<<endl;
	}
}


int main() {
   	int n;
   	cin>>n;
   	int a[n+1];
   	for(int i=1;i<=n;i++) cin>>a[i];
   	insertionSort(a,n);
    return 0;
}